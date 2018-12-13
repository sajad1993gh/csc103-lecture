#include<iostream>
#include<vector>
using namespace std;
/* read a bunch of integers from stdin and print them
	 * in reverse order. */
int main()
{
  int x;
  vector<int> V;
  while(cin>>x){
    V.push_back(x);
  }
  for(size_t i=0; i<V.size(); i++){
    cout<< V[i] << endl ;
  }

  for(size_t i=V.size()-1; i!=(size_t)(-1); i--){
    cout<< "Reverse: \t" << V[i] << endl;
  }
  for(size_t i=0; i<V.size(); i++){
  int j= V.size()-1 - i;

  cout<< V[j] << endl;
  }




  cout<< "sizeof(double): " << sizeof(double) << endl;

}