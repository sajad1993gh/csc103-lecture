#include "vector.h"
#include<cassert>
#include<algorithm>
using std::swap;
/* TODO: see if you can fill out some of the other member functions,
 * as well as fixing push_back below so that it works if the capacity
 * is already reached. */

/* NOTE: to test this stuff, you will have to write another main program
 * that declares a vector and calls some of these functions.  You will
 * also need to either (a) make the data array temporarily public, or
 * (b) implment the operator[] so you can at least read the elements... */
 //READ THE FINAL VERSION AND PRACTICE::::

void vector::pop_back()
{
	assert(size > 0);
	/* as long as vector isn't empty, just do this: */
   size--;
}

void vector::push_back(int x)
{
	/* assuming capacity is large enough:
	just do ::  data[size++] = x;
 */
	if (size == capacity) {
		/* need to allocate more space. */
		capacity *= 2;
		int* olddata = data;
		data = new int[capacity];
		for (size_t i = 0; i < size; i++) {
			data[i] = olddata[i];
		}
		delete [] olddata;
	}
	data[size++] = x;
}

int& vector::operator[](size_t i) {
	assert(i < size);
	return data[i];
}

vector::vector(size_t initCapacity)
{
	size = 0;
	capacity = initCapacity;
	data = new int[capacity];
}

vector::vector(const vector& V)
{
	size = V.size;
	capacity = V.capacity;
	// data = V.data;
	/* NO!  Above will end in disaster. TODO: make sure you understand why. */
	/* need to make a separate copy of V.data. */
	data = new int[capacity];
	for (size_t i = 0; i < size; i++) {
		data[i] = V.data[i];
	}
}


vector::~vector()
{
	delete [] data;
}

vector& vector::operator=(vector V)
{
	/* swap data pointers of *this and V: */
	swap(data,V.data);
	/* copy size and capacity from V */
	size = V.size;
	capacity = V.capacity;
	return (*this);
}






