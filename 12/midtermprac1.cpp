#include<iostream>
#include<vector>
using namespace std;
//remove multiples of d, (3 in this example) from the vector:
vector<int> removemultiples(vector<int>&V, int d)
{
  vector<int> S;
  for(int i=0; i<V.size() ; i++){
    if(V[i]%d !=0){
      S.push_back(V[i]);
    }
  }
    return S;

}
int main()
{
  vector<int> V= {1,2,3,4,5,6,7};

  vector<int> S= removemultiples(V,3);
  for(int i=0; i<S.size(); i++){
    cout<< S[i]<<", ";
  }
  cout<< endl;

  return 0;
}