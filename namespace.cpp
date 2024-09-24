
// C++ program to illustrate the use of namespace with same name of function and variables
/*
Explanation:
In the above example program, both n1 and n2 have a variable and function of the same name x and fun() respectively.
The namespace is used to decrease or limit the scope of any variable or function.
As in the above code variable x and method fun() were limited to namespaces n1 and n2. Thus, their scope was not outside the n1 or n2.
Every time using the scope resolution operator (::) in a variable or a function defined is not required, it can be solved with “using” directive.
The using directive means to include the whole code written in the namespace in the closing scope.
*/


/*
#include <iostream>

using namespace std;

// Namespace namespc1
namespace namespc1
{
    int x = 2;

    void fun()
    {
        cout << "This is fun() of namespc1" << endl;
    }
}

// Namespace namespc2
namespace namespc2
{
    int x = 5;

    void fun()
    {
        cout << "This is fun() of namespc2" << endl;
    }
}

// Driver Code
int main()
{
    cout << namespc1::x << endl;
    namespc1::fun();

    cout << namespc2::x << endl;
    namespc2::fun();

    
    return 0;
}
*/

// C++ program to demonstrate the use of "using" directive.
/*
Explanation:

In the above program, after writing “using namespace n1“, there is no need to use the scope resolution for utilizing the members of n1.
It can be interpreted as “using” copies of the code written in the namespace to the scope in which it has been written.
If “using namespace namespc1 is written inside the main() and tries to use the members (fun() and x in this case) in the different functions it would give a compile-time error.
*/

/*
#include <iostream>
using namespace std;

// Namespace namespc1
namespace namespc1
{
    int x = 2;
    void fun()
    {
        cout << "This is fun() of namespc1" << endl;
    }
}

// Namespace is included
using namespace namespc1;

// Driver code
int main() 
{
    cout << x << endl;

    // Function call
    fun();

    return 0;
}
*/

// A C++ code to demonstrate that we can define methods outside namespace.
#include <iostream>
using namespace std;

// Creating namespace
namespace namespc1
{
    void display();

    class geek
    {
    public:
        void display();
    };
}

// Defining methods of namespace
void namespc1::geek::display()
{
    cout << "namespc1::geek::display()" << endl;
}

void namespc1::display()
{
    cout << "namespc1::display()" << endl;
}

// Driver code
int main()
{
    namespc1::display();
    namespc1::geek obj;
    obj.display();

    return 0;
}