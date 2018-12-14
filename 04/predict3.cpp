#include<iostream>

using namespace std;

int main(){
  int x=9;
  while(x>0){
    if ((x>6) || x%5 )// x%5 means x cannot be divided by 5 (x%5 isnt 0)

      cout<< "x== "<<x<<"\n";
    x-=2;

  }
    cout<< "x== "<< x<< "\n";
}