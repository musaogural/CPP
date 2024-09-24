/*
Virtual Destructor:
Deleting a derived class object using a pointer of base class type that has a non-virtual destructor results in undefined behavior. 
To correct this situation, the base class should be defined with a virtual destructor. 
For example, the following program results in undefined behavior. 
*/

// CPP program without virtual destructor causing undefined behavior
/*
#include <iostream>

using namespace std;

class Base 
{
    public:
	Base()	 
	{ cout << "Constructing Base\n"; }

	~Base()
	{ cout<< "Destructing Base\n"; }	 
};

class Derived: public Base 
{
    public:
	Derived()	 
	{ cout << "Constructing Derived\n"; }

	~Derived()
	{ cout << "Destructing Derived\n"; }
};

int main()
{
    Derived *d = new Derived(); 
    Base *b = d;
    delete b;

    return 0;
}
*/

// A program with virtual destructor
#include <iostream>

using namespace std;

class Base 
{
    public:
	Base()	 
	{ cout << "Constructing Base\n"; }

	virtual ~Base()
	{ cout << "Destructing Base\n"; }	 
};

class Derived : public Base 
{
    public:
	Derived()	 
	{ cout << "Constructing Derived\n"; }

	~Derived()
	{ cout << "Destructing Derived\n"; }
};

int main()
{
    Derived *d = new Derived(); 
    Base *b = d;
    delete b;

    return 0;
}
