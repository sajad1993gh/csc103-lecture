//talking more about constructors::
#pragma once
#include <stddef.h> //for size_t
class vector{
  public:
  void push_back();
  void pop_back();
  int& operator[] (size_t i); //defines V[i] ====  V.operator[](i);

  //Constructors Destructors:

  vector(); //default constructor
  vector(const vector& V); //copy constructor. defines what "by value" means
  ~ vector(); //s
  private:
    int * data; //data points to an array of capacity integers
    size_t size;
    size_t capacity;
};