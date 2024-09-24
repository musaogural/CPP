// C++ program to demonstrate the working of copy elision via RVO(Return Value Optimization)
/*
RVO:
It is known as Return Value Optimization.
It is guaranteed to be called in a modern compiler program. 
For C++, it is guaranteed from C++ 17 standard.
Instead, the returned object is constructed in place of the function call. 
It does not allow the creation of a local object that is used as a return value.
*/
#include <iostream>
using namespace std;
 
class GFG 
{
    public:
        GFG() { cout << "GeeksforGeeks"; }
        GFG(const GFG&) // Copy Construcctor
        {
            cout << " GeeksforGeeks Copy Constructor";
        }
};
 
GFG func()
{
    return GFG(); // RVO example
}
 
int main()
{
    GFG G = func();
    return 0;
}