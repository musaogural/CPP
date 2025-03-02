// C++ program without declaring the move constructor

#include <iostream>
#include <vector>

using namespace std;

// Move Class
class Move
{
    private:
    int *data; // Declaring the raw pointer as the data member of the class

    public:
    Move(int d) // Constructor
    {
        data = new int; // Declare object in the heap
        *data = d;

        cout << "Constructer is called for" << d << endl;
    };

    // Copy Constructor to delegated Copy constructor
    Move(const Move &source) : Move{ *source.data }
    {
        // Copying constructor copying the data by making deep copy
        cout << "Copy constructer is called -"
             << "Deep copy for "
             << *source.data
             << endl;
    }

    // Destructor
    ~Move()
    {
        if(data != nullptr)
        {
            // If the pointer is not pointing to nullptr
            cout << "Destructor is called for "
                 << *data << endl;
        }
        else
        {
            // If the pointer is pointing to nullptr
            cout << "Destructor is called"
                 << " for nullptr"
                 << endl;
        }

        // Free the memory assigned to data member of the object
        delete data;
    }
};

// Driver code
int main()
{
    // Create vector of Move Class 
    vector<Move> vec;

    // Inserting object of Move class
    vec.push_back(Move{ 10 });
    vec.push_back(Move{ 20 });

    return 0;
}