//READ AND PRACTICE THIS::::: TODO: write a program that reads (arbitrarily many) integers from stdin and outputs the *second* smallest one.  NOTE: you don't need to store many numbers (all at once, that is) to do this!  You'll only need a few integer variables.  Think about invariants!

#include<iostream>
using namespace std;

int main(){

int s,s2,n;
  cout<<"Enter your numbers? \n";
  cin>>s>>s2;
  if(s>s2){
      n=s2;
      s2=s;
      s=n;
  }
  while(cin>>n){
    if(n<s){
      s2=s;
      s=n;
      }
    else if((n>s) && (n<s2)){
      s2=n;
    }
  }


cout<< "The second smallest number is: "<< s2<< endl;

}