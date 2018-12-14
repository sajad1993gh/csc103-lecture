#include<iostream>
using namespace std;

int main(){
  int b1=1, b2=1 ;
  int count=1, n=1;

  cout<<"Enter the n term you desire? \n";
  cin>>n;
  if(n<2){
    cout<< 1 << endl;
  }

  while(count<n){

    count++;
    b2=b1;
    b1=b1+b2-1;

  }
  cout<<"The "<<n<<"-th term of the fibonacci sequence is: "<<b1<<endl;

}