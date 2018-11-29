/* Dynamic memory::
dynamically allocate an integer
int *p= new integer
NEW THING:"new". this is the c++ interface for dynamically allocating memory.It returns a pointer to the newly allocated block.

notes

you can also allocate arrays dynamically:
int *A= new int[n]; //n any (positive) integer.

Summary of new:
1-first contiguous(hamjavar) block of memory of the requesed size
2-gives you the address of the beginning of the block
NOTE::: You must give this memory back to the OS at some point!(When youre done with it...) Now ? delete . E.g: delete A;


Example: resize a dynamically allocated array.(might be used as a subrocatine in vector when calling push_back...)

notes

Steps:
1-Allocate larger array (of size 2n)
2-coppy
3-delete
4-point to A


  int * B= new int[2*n];// 1
  for(int i=0; i<n; i++)
    B[i]=A[i] // 2

  delete[] A; //3

  A=B ;// 4


Now notes::



*/
#include <iostream>
using namespace std;
int main()
{





  return 0;
}

class vector{
  int *data;
  size_t size;
  size_t capacity;
  //aldd functions:
  void push_back(int x);








