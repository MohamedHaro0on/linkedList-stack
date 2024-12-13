#ifndef STACK_CPP
#define STACK_CPP

#include "Stack.h"

template <class T>
Stack<T>::Stack() : head(NULL), count(0) {} // Empty Constructor

template <class T>
Stack<T>::Stack(T data)
{
    Node<T> *newNode = new Node<T>(data);
    newNode->prev = NULL;
    head = newNode;
    count = 1;

} // initialize with node {

template <class T>
Stack<T>::Stack(const Stack<T> &other) : head(NULL), count(0) // copy constructor {
{

    if (this == &other)
    {
        return;
    }

    this->copyStack(other);
    count = other.count;
    this->display();
}

template <class T>
void Stack<T>::clear()
{
    Node<T> *current = head;
    while (current != NULL)
    {
        Node<T> *temp = current->prev;
        delete current;
        current = temp;
    }
    head = NULL;
    count = 0;
}
template <class T>
void Stack<T>::copyStack(const Stack<T> &other)
{
    cout << "this is the = operator \n";

    Node<T> *temp = other.head;
    Stack<T> tempStack;
    cout << "this is the function " << this->count << "  head : " << this->head << "\n";
    this->display();
    while (temp != NULL)
    {
        tempStack.push(temp->data);
        temp = temp->prev;
    }
    while (tempStack.getCount() > 0)
    {
        this->push(tempStack.pop());
    }
}
template <class T>
void Stack<T>::push(T data)
{
    Node<T> *newNode = new Node<T>(data);
    if (head != NULL)
    {
        newNode->prev = head;
    }
    head = newNode;
    count++;
}

template <class T>
T Stack<T>::pop()
{
    if (head == NULL)
    {
        throw std::underflow_error("Stack is Empty");
    }

    Node<T> *temp = head->prev;
    T data = head->data;
    delete head;
    count--;
    head = temp;

    return data;
}

template <class T>
int Stack<T>::getCount() const
{
    return count;
}

template <class T>
void Stack<T>::display() const
{
    Node<T> *current = head;
    while (current != NULL)
    {
        cout << current->data << "\t";

        current = current->prev;
    }
    cout << "\n";
}

// opertators :

template <class T>
Stack<T> &Stack<T>::operator+(const Stack<T> &other)
{
    Stack<T> *result = new Stack<T>(*this);
    cout << "this is the operator + \n ";
    result->display();
    result->copyStack(other);
    return *result;
}

template <class T>
T Stack<T>::operator[](const int &index)
{
    if (index < 0)
    {
        throw std::underflow_error("Out Of Boundry");
    }
    else if (index > count)
    {
        throw std::overflow_error("Out of range");
    }

    Node<T> *current = head;
    int counter = 1;
    while (current != NULL)
    {
        if (counter == index)
        {
            return current->data;
        }
        counter++;
        current = current->prev;
    }
}

template <class T>
Stack<T> &Stack<T>::operator=(const Stack<T> &other)
{
    if (this == &other)
    {
        cout << "this is the = operator \n";
        return *this;
    }
    if (head != NULL)
    {
        cout << "this is the = operator \n";

        clear();
    }
    cout << "this is the = operator \n";
    this->copyStack(other);
}
template <class T>
Stack<T>::~Stack()
{
    clear();
}

template class Stack<int>;
template class Stack<char>;
#endif