#include<iostream>
// TODO: write a loop that prints the sum of first n odd cubes?
using namespace std;

int main(){
  int n;
  cout<<"Enter your number? "<<endl;
  cin>>n;
  int i=0;
  int sum=0; //of cubes added to sum
  int edge=1;
  while(i<n){
    sum += edge * edge * edge;
    i++;
    edge +=2;
  }
  //here i==n
  cout<< sum << endl;
}