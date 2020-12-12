
#ifndef strack_hpp
#define strack_hpp

#include <stdio.h>
#include <iostream>

#include <iostream>
#include <cstdlib>
using namespace std;

#define SIZE 10

template<class T>
class Stack
{
    T *arr;
    int top;
    int capacity;

public:
    Stack(int size = SIZE);
    ~Stack();
    
    void push(T data);
    T pop();
    T peek();
    
    void show();
    
    int size();
    bool isEmpty();
    bool isFull();
};

template<class T>
Stack<T>::Stack(int size)
{
    arr = new int[size];
    capacity = size;
    top = 0;
}

template<class T>
Stack<T>::~Stack()
{
    delete arr;
}

template<class T>
void Stack<T>::push(T data)
{
    if (isFull())
    {
        cout << "stack is full" << endl;
        return;
    }
    arr[++top] = data; // or  arr[top++] = data
}

template<class T>
T Stack<T>::pop()
{
    if (isEmpty())
    {
        cout << "list is emplty";
    }
    return arr[top--];
}

template<class T>
T Stack<T>::peek()
{
    if (!isEmpty())
        return arr[top];
    else
        throw "error";
}

template<class T>
int Stack<T>::size()
{
    return top;
}

template<class T>
bool Stack<T>::isEmpty(){
    return top == 0;
}

template<class T>
bool Stack<T>::isFull(){
    return top == capacity;
}

template<class T>
void Stack<T>::show(){
    for (int i = 0; i < size(); i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

#endif /* strack_hpp */
