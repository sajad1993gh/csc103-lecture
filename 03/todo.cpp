#include<iostream>
using namespace std;

int main()
{
  //largest power of 2 in a given number:
  int given, power=0;
  cin>> given;
  if(given%2 !=0){
    cout<< 0<< endl;
  }
  else{
    while(given%2==0){
      given= given/2 ;
      power++;
    }
  cout<< power<< endl;
  }
cout<<"finish" << endl;
  int x=7, y=6;
  cout<< x/(double)y <<endl;
}

