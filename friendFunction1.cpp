/*
Features of Friend Functions
 A friend function is a special function in C++ that in spite of not being a member function of a class has the privilege to access the private and protected data of a class.
A friend function is a non-member function or ordinary function of a class, which is declared as a friend using the keyword “friend” inside the class. 
By declaring a function as a friend, all the access permissions are given to the function.
The keyword “friend” is placed only in the function declaration of the friend function and not in the function definition or call.
A friend function is called like an ordinary function. 
It cannot be called using the object name and dot operator. 
However, it may accept the object as an argument whose value it wants to access.
A friend function can be declared in any section of the class i.e. public or private or protected.
*/

// Global Function as Friend Function
// C++ program to create a global function as a friend function of some class
#include <iostream>
using namespace std;

class Base 
{
    private:
        int private_variable;

    protected:
        int protected_variable;

    public:
        Base()
        {
            private_variable = 10;
            protected_variable = 99;
        }
        
        // friend function declaration
        friend void friendFunction(Base& obj);
};


// friend function definition
void friendFunction(Base& obj)
{
    cout << "Private Variable: " << obj.private_variable << endl;
    cout << "Protected Variable: " << obj.protected_variable << endl;
}

// driver code
int main()
{
    Base baseObj;
    friendFunction(baseObj);

    return 0;
}
