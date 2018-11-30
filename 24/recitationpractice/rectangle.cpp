#include <iostream>
using std::cin;
using std::cout;
#include "rectangle.h"

double rectangle::area()
{
	return w*h;

}


rectangle::rectangle(double a,double b)
{
  w=a;
  h=b;
}
rectangle::~rectangle()
{
  cout<<"the liftime of the object ends"<<"\n";
}