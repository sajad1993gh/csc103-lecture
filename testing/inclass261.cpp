//continuation of vector class:::


int& vector::operator[](size_t i)
{
  return data[i]; // X[i] == *(X+i)
}

vector::vector(size_t initCapacity)
{
  size = 0;
  capacity = initCapacity;
  data = new int[capacity]; // allocate storage for vector's elements
}