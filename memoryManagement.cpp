// C++ Program to implement the Memory Management

#include <cstring>
#include <iostream>

using namespace std;

// Driver code
int main()
{
    int num = 5;
    int array[num] = {1, 2, 3, 4, 5};
    float* ptr;

    //Memory allocation of num number of floats
    ptr = new float[num];

    for(int i = 0; i < num; ++i)
    {
        *(ptr + i) = array[i];
    }

    cout << "Display the GPA of students:" << endl;
    
    for(int i = 0; i < num; ++i)
    {
        cout << "student" << i + 1 << ":" << *(ptr + i) << endl;
    }

    // Ptr memory is released
    delete[] ptr;


    return 0;
}