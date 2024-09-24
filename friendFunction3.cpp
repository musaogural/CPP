// A Function Friendly to Multiple Classes
// C++ Program to demonstrate how friend functions work as a bridge between the classes
#include <iostream>
using namespace std;

// Forward declaration
class ABC; 

class XYZ 
{
    int x; // Access specifier is default private

    public:
        void set_data(int a) 
        { 
            x = a; 
        }

        friend void max(XYZ, ABC);
};

class ABC 
{
    int y;

    public:
        void set_data(int a) 
        { 
            y = a; 
        }

        friend void max(XYZ, ABC);
};

void max(XYZ t1, ABC t2)
{
    if (t1.x > t2.y)
        cout << t1.x;
    else
        cout << t2.y;
}

// Driver code
int main()
{
    ABC objABC;
    XYZ objXYZ;
    objXYZ.set_data(20);
    objABC.set_data(35);

    // calling friend function
    max(objXYZ, objABC); 
    return 0;
}