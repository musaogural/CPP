/*
C++ Function Overloading
Function Overloading is defined as the process of having two or more functions with the same name, but different parameters. 
In function overloading, the function is redefined by using either different types or number of arguments. 
It is only through these differences a compiler can differentiate between the functions.
The advantage of Function overloading is that it increases the readability of the program because you don’t need to use different names for the same action.
*/

/*
// Program of function overloading when number of arguments vary
#include <iostream>
using namespace std;

class Cal {
public:
    int add(int a, int b) { return a + b; }
    int add(int a, int b, int c) { return a + b + c; }
};
int main(void)
{
    Cal calObj; // class object declaration.
    cout << calObj.add(10, 20) << endl;
    cout << calObj.add(12, 20, 23) << endl;
    return 0;
}
*/

// Program of function overloading with different types of arguments.
#include <iostream>
using namespace std;

class Cal {
public:
    int mul(int a, int b) { return a * b; }
    float mul(double x, int y) { return x * y; }
};
int main(void)
{
    
    Cal calObj;
    cout << calObj.mul(6, 7) << endl;
    cout << calObj.mul(0.2, 3) << endl;
    return 0;
}