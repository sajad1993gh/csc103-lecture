#include <iostream>
using std::cin;
using std::cout;
#include "rectangle.h" /* get description of rectangle class */

int main()
{
	rectangle r(3,4),r2(6,8);
  //cout << "enter width and height: ";
	//cin >> r.w >> r.h;
	cout << "area = " << r.area() << "\n";
	cout<< "area = " << r2.area() << "\n";
	return 0;
}//the destructor comes in!