// C++ program to demonstrate 
// protected access modifier 
#include <bits/stdc++.h> 
using namespace std; 
  
// Base class 
class Parent 
{    
    // Protected data members 
    protected: 
        int id_protected; 
     
}; 
  
// Sub class or derived class from public base class 
class Child : public Parent 
{ 
    public: 
        void setId(int id) 
        { 
            
            // Child class is able to access the inherited  
            // protected data members of base class 
            
            id_protected = id;  
        } 
        
        void displayId() 
        { 
            cout << "id_protected is: " << id_protected << endl; 
        } 
}; 
  
// Main function 
int main() { 
      
    Child objChild; 
      
    // Member function of the derived class can 
    // access the protected data members of the base class 
    objChild.setId(81); 
    objChild.displayId(); 

    return 0; 
} 