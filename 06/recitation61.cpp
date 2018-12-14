#include<iostream>
/*
Just did more explanaiton about the call by reference vs call by value
and made an example of the swaping values function.
ARRAY: basically just a contigous block of values with the same type
int A[10];
A: array namespace
10: array size
A[0], A[1], A[2], .... A[9]
index: from 0 ...... to (size-1)
A[0] is the first element

I made this below to input the array values:
using namespace std;

int main(){
  int A[10];
  int i;
  for(i=0; i<10 ; i++){
    cin>> A[i];
    cout<< "\n" << A[i] << "\n" ;
  }



}


*/
using namespace std;

int main(){
  int A[10];
  for(int i=0; i<10 ; i++){
    A[i]=i*i;
    cout<<A[i]<<endl;
  }

  }

