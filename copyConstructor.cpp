#include <iostream>
#include <string.h>
using namespace std;

class Student 
{
    int rno;
    char name[50];
    double fee;
 
    public:
        Student(int, char[], double);
        Student(Student &stdObj) // copy constructor
        {
            rno = stdObj.rno;
            strcpy(name, stdObj.name);
            fee = stdObj.fee;
        }
        void display();
};
 
Student::Student(int no, char n[], double f)
{
    rno = no;
    strcpy(name, n);
    fee = f;
}
 
void Student::display()
{
    cout << endl << rno << "\t" << name << "\t" << fee;
}
 
int main()
{
    Student stdObj(1001, "Manjeet", 10000);
    stdObj.display();
 
    Student manjeet(stdObj); // copy constructor called
    manjeet.display();
 
    return 0;
}