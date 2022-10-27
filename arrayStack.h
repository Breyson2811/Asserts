#ifndef ARRAY_STACK_H
#define ARRAY_STACK_H
#include "stack.h"

template<typename T>
class ArrayStack: public stack<T>{

  private:
    T data[];
    int size; //memory size
    T* sp;
    void resize();
  public:
    ArrayStack(int s):size{s}, data{new T[size]}, sp{data}{}
    void push(T);
    void pop();
    T top();
    bool isEmpty();
};
#endif 