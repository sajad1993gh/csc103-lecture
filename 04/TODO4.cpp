#include<iostream>
// TODO: write code that gets an integer n from the user and prints out the n-th term of the fibonacci sequence.
using namespace std;

int main(){
  int n, count;
  count=1;
  int b1=1, b2=1;
  int sum;
  cout<<"Enter your number? " ;
  cin>> n;
  n=n-1;
if(n<2){
      cout<< 1 << endl;

    }
else if(n==2){
      cout<< 2<< endl;
    }
else{

  while(count<n){


      int temp= b1;
      b1=b2;
      b2= temp + b1;
      ++count;
  }

  cout<< "The "<<n<<"-th term of the fibonacci sequence is: "<<b2<<endl;



}

}