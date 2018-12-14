#include<iostream>
using std::cout;
using std::cin;

int main(){

  int x1;
  int x2;
  int x3;
  cout<< "Enter three integers?" << "\n" ;


  cin>> x1 >> x2 >> x3 ;
  double z= (x1+x2+x3)/3.;

  cout<< "The Average is " << z;

  return 0;
}
