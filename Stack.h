#ifndef STACk_H
#define STACk_H

#include "Node.h"

template <class T>
class Stack
{
    // utility functions :
private:
    Node<T> *getNode(T data);
    Node<T> *head;
    int count;
    void clear();
    void copyStack(const Stack<T> &);

public:
    Stack();                 // Empty Constructor
    Stack(T);                // initialize with node ;
    Stack(const Stack<T> &); // copy constructor ;

    void push(T);
    T pop();
    int getCount() const;
    void display() const;

    // opertators :
    Stack<T> &operator+(const Stack<T> &);
    T operator[](const int &);
    Stack<T> &operator=(const Stack<T> &);

    // destructor :
    ~Stack();
};

#endif