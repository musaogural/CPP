// Member Function of Another Class as Friend Function
// C++ program to create a member function of another class as a friend function
#include <iostream>
using namespace std;

// Forward definition needed
class Base; 

// Another class in which function is declared
class anotherClass 
{
    public:
        void memberFunction(Base& obj);
};

// Base class for which friend is declared
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
        friend void anotherClass::memberFunction(Base& obj);
};

// friend function definition
void anotherClass::memberFunction(Base& obj)
{
    cout << "Private Variable: " << obj.private_variable << endl;
    cout << "Protected Variable: " << obj.protected_variable << endl;
}

// driver code
int main()
{
    Base baseObj;
    anotherClass anotherObj;
    anotherObj.memberFunction(baseObj);

    return 0;
}