#include<iostream>
using namespace std;

int main(){
  int n;
  int min;

  cout<< "Enter your numbers and we'll find the smallest\n" ;
  cin>>n;
  min=n;
  while(cin>>n){

    if(n<min){
      min=n;
    }
  }
  cout<<"Smallest number so far: " << min << endl;

}