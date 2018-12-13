/* TODO: write a function that takes a vector and searches for
 * a particular value x, returning true if and only if x is found.
 * NOTE: you should think carefully about how to pass the parameters,
 * especially for the vector.  (By value, reference, const reference?) */
#include<iostream>
#include<vector>
using namespace std;

bool isInVector(const vector<int>& V, int x)
{
  bool isInV= false;
  for(size_t i=0; i<V.size(); i++){
    if(x==V[i]){
      isInV= true;
      break;
    }

  }
  return isInV;
}

int main()
{
  vector<int> V;
  int n;
  while(cin>>n){
    V.push_back(n);
  }
  int x= 5;
  bool isInIt= isInVector(V, x);
  cout<< isInIt << endl;


}
