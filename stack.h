#ifndef STACK_H
#define STACK_H
template <typename T>

class Stack{
  public:
    virtual void push (T) = 0; //virtual, redefinicion
    virtual void pop() = 0;
    virtual T top() = 0;
    virtual bool isEmpty() = 0;
};
#endif
