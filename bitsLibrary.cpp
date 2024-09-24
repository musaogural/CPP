/*
It is basically a header file that includes every standard library.

Disadvantages of bits/stdc++ 
bits/stdc++.h is a non-standard header file of GNU C++ library. 
So, if you try to compile your code with some compiler other than GCC it might fail; e.g. MSVC do not have this header.
Using it would include a lot of unnecessary stuff and increases compilation time.
This header file is not part of the C++ standard and is therefore, non-portable, and should be avoided.
Moreover, even if there were some catch-all header in the standard, 
you would want to avoid it in lieu of specific headers, since the compiler has to actually read in and parse every included header (including recursively included headers) every single time that translation unit is compiled.

Advantages of bits/stdc++
In contests, using this file is a good idea, when you want to reduce the time wasted in doing chores; especially when your rank is time sensitive.
This also reduces all the chores of writing all the necessary header files.
You don’t have to remember all the STL of GNU C++ for every function you use.
*/

/*
#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    cout << sqrt(25); 
    return 0;
}
//Compilation time 0.005s
//Code submitted by Susobhan AKhuli
*/

#include <iostream>
#include <cmath>
using namespace std;
 
int main() 
{
    cout << sqrt(25);
    return 0;
}
//Compilation time 0.003s
//Code submitted by Susobhan AKhuli
