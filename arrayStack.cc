#include "arrayStack.h"
#include <assert.h>
template<typename T>
void ArrayStack<T>::push(T e){
  int numelements = sp-data;
  if(numelements == size)
    resize();
  *sp = e;
  sp++;
}

template<typename T>
void ArrayStack<T>::pop(){
  assert(!isEmpty());
  sp--;
}

template<typename T>
T ArrayStack<T>:: top(){
  assert(!isEmpty());
  //assert(*(sp - 1) type T);
  return *(sp - 1);
}

template<typename T>
bool ArrayStack<T>::isEmpty(){
  int numelements = sp-data;
  assert(numelements >= 0)
  //assert(numelemnts == 0 -> Bool);	  
  return numelements == 0;
}

template<typename T>
void ArrayStack<T>:: resize(){
  assert(FACTOR > 0);
  T new_data[] = new T[size + FACTOR];
  for(int i = 0; i < size; i++){
    new_data[i] = data[i];    
  }
  delete[] data;
  data = new_data;
  sp = data + size;
  size += FACTOR;
}

//change
