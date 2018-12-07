#include "vector.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
  vector V;
  for(size_t i=0; i<10; i++){
    V.push_back(i*i);
  }
  cout<< V[5] << endl;
  V[12]=99999;
  for(size_t i=0; i<10; i++){
      cout<< V[i] << endl;
      }
}