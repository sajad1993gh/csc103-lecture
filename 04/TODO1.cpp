#include<iostream>
//Calculating the Average
using namespace std;

int main(){
  double n;
  double sum;
  int count=0;
  cout<< "Enter your numbers? "<<endl;
  while(cin>>n){
    sum += n;
    count ++;
  }
  cout<< "The average is : " << sum/count << endl;
}