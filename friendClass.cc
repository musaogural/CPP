// C++ Program to demonstrate the functioning of a friend class
#include <iostream>
using namespace std;

class GFG 
{
    private:
        int private_variable;

    protected:
        int protected_variable;

    public:
        GFG()
        {
            private_variable = 10;
            protected_variable = 99;
        }

        // friend class declaration
        friend class FRND;
};

// Here, class F is declared as a friend inside class GFG. 
// Therefore, F is a friend of class GFG. 
// Class F can access the private members of class GFG.
class FRND 
{
    public:
        void display(GFG& cfgObj)
        {
            cout << "The value of Private Variable = " << cfgObj.private_variable << endl;
            cout << "The value of Protected Variable = " << cfgObj.protected_variable << endl;
        }
};

// Driver code
int main()
{
    GFG cfgObj;
    FRND friObj;
    friObj.display(cfgObj);

    return 0;
}