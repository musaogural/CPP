/*
Standard output stream (cout): Usually the standard output device is the display screen. 
The C++ cout statement is the instance of the ostream class. 
It is used to produce output on the standard output device which is usually the display screen. 
The data needed to be displayed on the screen is inserted in the standard output stream (cout) using the insertion operator(<<).
*/

/*
#include <iostream>
 
using namespace std;
 
int main()
{
    char sample[] = "GeeksforGeeks";
 
    cout << sample << " - A computer science portal for geeks";
 
    return 0;
}
*/

/*
Un-buffered standard error stream (cerr): The C++ cerr is the standard error stream that is used to output the errors. 
This is also an instance of the iostream class. As cerr in C++ is un-buffered so it is used when one needs to display the error message immediately. 
It does not have any buffer to store the error message and display it later.
The main difference between cerr and cout comes when you would like to redirect output using “cout” that gets redirected to file if you use “cerr” the error doesn’t get stored in file.
*/

/*
#include <iostream>
 
using namespace std;
 
int main()
{
    cerr << "An error occurred";
    return 0;
}
*/

/*
buffered standard error stream (clog): 
This is also an instance of ostream class and used to display errors but unlike cerr the error is first inserted into a buffer and is stored in the buffer until it is not fully filled. 
or the buffer is not explicitly flushed (using flush()). 
The error message will be displayed on the screen too.
*/

/*
#include <iostream>
 
using namespace std;
 
int main()
{
    clog << "An error occurred";
 
    return 0;
}
*/