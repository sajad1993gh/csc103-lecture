#pragma once /* prevent this from being #included multiple times */

class rectangle {
public: /* public stuff == what you need to *use* the class.  */
	double w;
	double h;
	double area();
	rectangle(double,double); //constructor, it doesnt have a return type
  ~rectangle(); //destructoor, it doesnt have a return type
};
