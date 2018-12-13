/*SELECTION SORT:
16 12 8 10 4   :V1 start==0
4 12  8 10 16   V2 start==1
-
4 8  12 10 16    V3 start==2
- -
4 8  10 12 16     V4  start==3
- -  - (- - as a consequence)


*/
#include<vector>
#include<iostream>
#include<cmath>

using namespace std;

size_t smallestIndex(const vector<int>& V, size_t start)
{
  size_t smallIndex=start;
  for(size_t i=start+1; i<V.size() ; ++i){
   if(V[i]<V[smallIndex])
      smallIndex=i;
  }
  return smallIndex;

}
void sort (vector<int> &V)
{
  for(size_t i=0; i<V.size()-1 ; ++i){
    //swap(V[i], V[smallestIndex(V,i)]);
    int temp= V[smallestIndex(V,i)];
    V[smallestIndex(V,i)]=V[i];
    V[i]=temp;
  }

}

int main(){
  vector<int> V={16, 12, 8, 10, 4};

  sort(V);
  for(size_t i=0; i<V.size(); i++){
    cout<< V[i] <<", ";
  }
  cout<< endl;


  return 0;
}