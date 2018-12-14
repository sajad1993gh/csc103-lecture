// TODO: a slight generalization of an earlier exercise: for integers n and k, determine the largest power of k that divides n. NOTE: see if you can formalize the invariant you used to solve this.

#include<iostream>
using namespace std;

int main(){
int n ,k;
  cout<<"Enter your numbers, n ^ k? "<<endl;
  cin>> n >> k ;
  int count=0;
  while((n%k==0) && k!=1){
    n/=k;
  count++;
  }
  cout<<"The largest power is: "<< count <<endl;
}