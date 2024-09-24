// CPP Program to demonstrate the use of copy constructor.
/*
When an object is created by directly initializing it with another object of the same type, the copy constructor is called.
It is, however, not guaranteed that a copy constructor will be called in all these cases, because the C++ Standard allows the compiler to optimize the copy away in certain cases, 
one example being the Return Value Optimization (sometimes referred to as RVO). 
Note: C++ compiler implicitly provides a copy constructor, if no copy constructor is defined in the class.
*/

#include <iostream>
#include <stdio.h>
using namespace std;

class storeVal 
{
    public:
        // Constructor
        storeVal() {}

        // Copy Constructor
        storeVal(const storeVal &s)
        {
            cout << "Copy constructor has been called " << endl;
        }
};

// function that returns the object
storeVal foo()
{
    storeVal obj;
    return obj;
}

// function that takes argument of object type
void foo2(storeVal &obj) { return; }

// Driver code
int main()
{
    storeVal obj1;

    cout << "Case 1: ";
    foo();
    cout << endl;

    cout << "Case 2: ";
    foo2(obj1);
    cout << endl;

    cout << "Case 3: ";
    storeVal obj2 = obj1;

    return 0;
}