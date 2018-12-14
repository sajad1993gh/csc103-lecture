#include<iostream>
// TODO: write a loop that prints the sum of first n odd cubes?
using namespace std;

int main(){
  int n,m;
  int sum=0;
  int count;
  cout<< "Enter your numbers? ";
  cin>>n;

    while(count<=n){
      m=count*count*count;
      if(m%2!=0){
      sum +=m;
      }
      count++;
    }

  cout<< "Sum is: "<< sum << endl;


}