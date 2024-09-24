// C++ program to demonstrate the number of times
// constructor and destructors are called

/*
Note: Objects are destroyed in the reverse order of their creation. 
In this case, t3 is the first to be destroyed, while t is the last.
*/

#include <iostream>
using namespace std;

static int objCount = 0;     //It is static so that every class object has the same value 
class Test 
{
    public:
    // User-Defined Constructor
    Test()
    {
        objCount++;
        cout << "No. of Object created: " << objCount << endl;
    }
 
    // User-Defined Destructor
    ~Test()
    {
        cout << "No. of Object destroyed: " << objCount << endl;
        objCount--;
    }
};
 
// Driver code
int main()
{
    Test t, t1, t2, t3;
 
    return 0;
}