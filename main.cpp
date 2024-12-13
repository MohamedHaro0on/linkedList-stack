#include "Stack.h"
#include <iostream>
using namespace std;

int main()
{
     try
     {
          // Create an empty stack
          Stack<int> intStack;
          cout << "Pushing elements onto the stack:\n";

          // Push elements onto the stack
          intStack.push(10);
          intStack.push(20);
          intStack.push(30);

          // Display the stack
          cout << "Stack contents: \n";
          intStack.display();

          cout << endl
               << endl
               << endl
               << "------------------------------------------" << endl
               << endl
               << endl;

          // Pop an element from the stack
          cout << "Popped element: " << intStack.pop() << endl;

          // Display the stack again
          cout << "Stack contents after pop: ";
          intStack.display();

          cout << endl
               << endl
               << endl
               << "------------------------------------------" << endl
               << endl
               << endl;

          // Test the copy constructor
          cout << "Creating a copy of the stack:\n";
          Stack<int> copiedStack(intStack);
          cout << "Copied stack contents: \n";
          copiedStack.display();

          cout << endl
               << endl
               << endl
               << "------------------------------------------" << endl
               << endl
               << endl;

          // Test the assignment operator
          cout << "Assigning stack to a new stack:\n";
          Stack<int> assignedStack;
          assignedStack = intStack;
          cout << "Assigned stack contents: \n";
          assignedStack.display();

          cout << endl
               << endl
               << endl
               << "------------------------------------------" << endl
               << endl
               << endl;

          // Test operator+
          cout << "Merging stacks using operator+:\n";
          Stack<int> mergedStack;
          mergedStack = (intStack + copiedStack);
          cout << "Merged stack contents: ";
          mergedStack.display();

          cout << endl
               << endl
               << endl
               << "------------------------------------------" << endl
               << endl
               << endl;

          cout << "this is the count of the Merged Stack " << mergedStack.getCount() << endl;
          // Test operator[]
          cout << "Accessing elements using operator[]:\n";
          cout << "Element at index 1: " << mergedStack[1] << endl;
     }
     catch (const exception &e)
     {
          cout << "Exception: " << e.what() << endl;
     }

     return 0;
}