/* implementation of rectangle */ //Defining the functions mentioned in the class rectangle

#include "rectangle.h"

double rectangle::area()
{
	return w*h;
	/* alternatively: */
	// return this->w*this->h;
}

double rectangle::perimeter()
{
	return 2*(w+h);
}
