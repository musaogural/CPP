// C++ program to demonstrate the working of a Copy Constructor
#include <iostream>
using namespace std;
 
class Point 
{
    private:
        int x, y;
    
    public:
        Point(int x1, int y1)
        {
            x = x1;
            y = y1;
        }
    
        // Copy constructor
        Point(const Point &p1Obj)
        {
            x = p1Obj.x;
            y = p1Obj.y;
        }
    
        int getX() { return x; }
        int getY() { return y; }
};
 
int main()
{
    Point p1Obj(10, 15); // Normal constructor is called here
    Point p2Obj = p1Obj; // Copy constructor is called here
 
    // Let us access values assigned by constructors
    cout << "p1.x = " << p1Obj.getX() << "," << "p1.y = " << p1Obj.getY();
    cout << "\n";
    cout << "p2.x = " << p2Obj.getX() << "," << "p2.y = " << p2Obj.getY();
    return 0;
}