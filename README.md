# Stack Implementation in C++

This project implements a generic **Stack** data structure using C++ templates. The implementation is accompanied by a `Node` class that serves as the building block for the stack.

## Features

- **Templated Classes**: Both `Node` and `Stack` classes are implemented as templates, allowing the stack to store data of any type.
- **Dynamic Memory Management**: Uses pointers to dynamically allocate memory for stack nodes.
- **Copy Constructor and Assignment Operator**: Ensures deep copying to prevent data corruption.
- **Custom Operators**:
  - `+`: Merges two stacks into a new stack.
  - `[]`: Accesses elements in the stack by index.
- **Exception Handling**: Handles stack underflow and out-of-bound errors gracefully.

## File Structure

- **Node.h**: Header file for the `Node` class.
- **Node.cpp**: Implementation of the `Node` class.
- **Stack.h**: Header file for the `Stack` class.
- **Stack.cpp**: Implementation of the `Stack` class.
- **main.cpp**: Demonstrates the usage of the `Stack` class.

## How It Works

### Node Class
The `Node` class represents an individual element in the stack. It contains:
- A `data` field to store the value.
- A pointer `prev` to link to the previous node.

### Stack Class
The `Stack` class provides:
- Basic operations:
  - `push(T data)`: Adds an element to the stack.
  - `pop()`: Removes and returns the top element.
  - `display()`: Displays the stack contents.
  - `getCount()`: Returns the number of elements in the stack.
- Utility functions:
  - `clear()`: Deletes all elements from the stack.
  - `copyStack(const Stack&)`: Copies elements from another stack.
- Overloaded operators:
  - `+`: Combines two stacks.
  - `[]`: Accesses an element by index.
  - `=`: Assigns one stack to another.

## How to Run

1. Clone this repository or copy the files to your local machine.
2. Compile the project using a C++ compiler. For example:
   ```bash
   g++ -o stack_program main.cpp Stack.cpp Node.cpp
   ```
3. Run the compiled program:
   ```bash
   ./stack_program
   ```

## Example Output

The program in `main.cpp` demonstrates:
1. Pushing elements onto the stack.
2. Popping elements from the stack.
3. Using the copy constructor and assignment operator.
4. Merging stacks with the `+` operator.
5. Accessing elements with the `[]` operator.

### Sample Execution
```
Pushing elements onto the stack:
Stack contents:
30    20    10

------------------------------------------

Popped element: 30
Stack contents after pop: 20    10

------------------------------------------

Creating a copy of the stack:
Copied stack contents:
20    10

------------------------------------------

Assigning stack to a new stack:
Assigned stack contents:
20    10

------------------------------------------

Merging stacks using operator+:
Merged stack contents: 20    10    20    10

------------------------------------------

This is the count of the Merged Stack 4
Accessing elements using operator[]:
Element at index 1: 10
```

## Requirements

- C++17 or higher
- A C++ compiler (e.g., GCC, Clang, or MSVC)
