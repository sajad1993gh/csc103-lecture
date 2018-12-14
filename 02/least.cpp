#include<iostream>
#include<limits.h>
using namespace std;
int main(){
  int x=INT_MAX;
  int n;
  cout<<"Enter your numbers with a letter in the end?\n";
  while(cin>>n){
    if(n<x){
      x=n;
    }
  }
    cout<< "The Least number is: "<<x<<endl;


  return 0;

}