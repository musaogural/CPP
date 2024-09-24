// C++ Program to illustrate how to define the parameterized
// constructor outside the class
#include <iostream>
#include <string.h>
using namespace std;
 
// Class definition
class student 
{
    int rno;
    char name[50];
    double fee;
 
    public:
        student(int, char[], double);
        void display();
};
 
// Parameterized constructor outside class
student::student(int no, char n[], double f)
{
    rno = no;
    strcpy(name, n);
    fee = f;
}
 
void student::display()
{
    cout << endl << rno << "\t" << name << "\t" << fee;
}
 
// Driver code
int main()
{
    student s(1001, "Ram", 10000);
    s.display();
    return 0;
}