#include<iostream>
using namespace std;

int main(){
  int b1=1, b2=1 ;
  int count=1, sum=2, n=1;

  cout<<"Enter the n term you desire? \n";
  cin>>n;

  while(count<n){

    count++;
    b2=b1;
    b1=sum;
    sum= b1+b2;


  }
  cout<<"The "<<n<<"-th term of the fibonacci sequence is: "<<b1<<endl;

}