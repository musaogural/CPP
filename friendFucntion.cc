#include <iostream>
using namespace std;

class Largest 
{
    int a;
    int b;
    int m;
 
public:
    void set_data();
    friend void find_max(Largest &obj);
};
 
void Largest::set_data()
{
    cout << "Enter the first number: "; cin >> a;
    cout << "Enter the second number: "; cin >> b;
}
 
void find_max(Largest &lObj)
{
    if (lObj.a > lObj.b)
        lObj.m = lObj.a;
    else
        lObj.m = lObj.b;
 
    cout <<"\n";
    cout << "Largest number is: " << lObj.m;
}
 
int main()
{
    Largest lObj;
    lObj.set_data();
    find_max(lObj);

    return 0;
}