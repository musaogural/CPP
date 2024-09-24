// C++ Program to implement the working of multi-threading

#include <cstdlib>
#include <iostream>
#include <pthread.h>

using namespace std;

#define NUM_OF_THREADS 5

// Function to print Hello with the thread id
void* printHello(void* threadId)
{
    // Thread ID
    long tId;
    tId = (long)threadId;

    // Print the thread ID
    cout << "Hello from Thread ID: " << tId << endl;

    pthread_exit(NULL);
}

// Driver code
int main()
{
    // Create thread
    pthread_t threads[NUM_OF_THREADS];
    int i;
    int rc;

    for(i = 0; i < NUM_OF_THREADS; i++)
    {
        cout << "main() : creating thread, " << i << endl;

        rc = pthread_create(&threads[i], 
                            NULL,
                            printHello, 
                            (void*)&i);
        
        // If thread is not created
        if(rc)
        {
            cout << "Error: unable to create thread" << rc << endl;
            exit(-1);
        }
    }

    pthread_exit(NULL);
}