// We redirect above created temp file 
// of 17 MB to stdin when this program is run.
#include<iostream>
using namespace std;
 
int main()
{
    char buffer[256];
    while (cin >> buffer)
    {
    }
    return 0;
}

/*
Output of above program when dummy file is redirected to stdin.

$ g++ cin_test.cc –o cin_test
$ time ./cin_test < /tmp/dummy
real     0m2.162s
user     0m1.696s
sys     0m0.332s
*/

// Filename : scanf_test.c to see performance of scanf()
// We redirect above created temp file
// of 17 MB to stdin when this program is run.
#include<cstdlib>
#include<cstdio>
int main()
{
    char buffer[256];
    while (scanf("%s", buffer) != EOF)
    {
    }
    return 0;
}
/*
$ g++ scanf_test.cc –o scanf_test
$ time ./scanf_test < /tmp/dummy
real     0m0.426s
user     0m0.248s
sys     0m0.084s
*/

/*
Well, the above results are consistent with our observations. 
Why is scanf faster than cin? On a high level both of them are wrappers over theread() system call, just syntactic sugar. 
The only visible difference is that scanf() has to explicitly declare the input type, whereas cin has the redirection operation overloaded using templates. 
This does not seem like a good enough reason for a performance hit of 5x. It turns out that iostream makes use of stdio‘s buffering system. So, cin wastes time synchronizing itself with the underlying C-library’s stdio buffer, so that calls to bothscanf()and cin can be interleaved. 
The good thing is that libstdc++ provides an option to turn off synchronization of all the iostream standard streams with their corresponding standard C streams using

std::ios_base::sync_with_stdio(false);
and cin becomes faster than scanf() as it should have been
*/

// Filename : cin_test_2.cc to see
// performance of cin() with stdio syc disabled using sync_with_stdio(false).
#include<iostream>
using namespace std;
 
int main()
{
    char buffer[256];
    ios_base::sync_with_stdio(false);
 
    while (cin >> buffer)
    {
 
    }
    return 0;
}

/*
$ g++ cin_test_2.cc –o cin_test_2
$ time./cin_test_2 </tmp/dummy
real    0m0.380s
user   0m0.240s
sys    0m0.028s 
*/