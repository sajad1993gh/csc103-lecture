//continuation of vector class:::
#incldue "vector.h"


#define NDEBUG 1
int& vector::operator[](size_t i)
{
  assert(i<size); // NOTE:: if you have #defined NDEBUG, the assert disappears before eaching the compiler! no performance cost
  return data[i]; // X[i] == *(X+i)
}

vector::vector(size_t initCapacity)
{
  size = 0;
  capacity = initCapacity;
  data = new int[capacity]; // allocate storage for vector's elements
}

vector::~vector()
{
  delete[] data;
}

vector::vector(const vector& V)
{
  //NOTE: Dont do this ?!
  this -> size = V.size;
  this -> capacity = V.capacity;
  this ->data = V.data;
}

//read and sudy the lecture .... 26
