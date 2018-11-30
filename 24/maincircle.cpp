#include<iostream>

using std::cin;
using std::cout;

#include"circle.h"

int main()
{
  circle c;
  cout<<"Enter the radius?\n";
  cin>>c.r;
  cout<<"\n area = "<< c.area() <<"\n perimeter = "<<c.perimeter() <<"\n";

  return 0;
}