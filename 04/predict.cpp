#include<iostream>

using namespace std;
int main(){
  int x=10, y=3;
  double d=4, e=2;
  cout<< --x << endl; //x=9, x==9
  cout<< x-- << endl; //x=8, x==9
  cout<< y/x << endl; // 3/8,
  y=e;
  cout<< y/x << endl;
  cout<< x%y<< endl;
  cout<< (x-d)/y << endl;
}