#include<iostream>
#include<limits.h>
using namespace std;
int main(){
  int x=INT_MIN;
  int n;
  cout<<"Enter your numbers with a letter in the end?\n";
  while(cin>>n){
    if(n>x){
      x=n;
    }
  }
    cout<< "The largest number is: "<<x<<endl;


  return 0;

}