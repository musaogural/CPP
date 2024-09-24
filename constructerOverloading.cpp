// C++ program to illustrate  
// Constructor overloading 
#include <iostream> 
using namespace std; 
  
class Construct 
{  
  
public: 
    float area;  
      
    // Constructor with no parameters 
    Construct() 
    { 
        area = 0; 
    } 
      
    // Constructor with two parameters 
    Construct(int a, int b) 
    { 
        area = a * b; 
    } 
      
    void disp() 
    { 
        cout<< area<< endl; 
    } 
}; 
  
int main() 
{ 
    // Constructor Overloading with two different constructors of class name 
    Construct obj1; 
    Construct obj2( 10, 20); 
      
    obj1.disp(); 
    obj2.disp(); 
    
    return 1; 
} 