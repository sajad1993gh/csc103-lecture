#include<iostream>
#include<vector>

using namespace std;
int oddcount(const vector<int>& V){
  int count=0;
  for(size_t i=0; i<V.size() ; i++){
    if(V[i]%2 !=0){
      count++;
    }
  }
  return count;
}

int main()
{
	/* simple test: read vector (hopefully sorted) from stdin,
	 * search for 23, report outcome. */
	vector<int> V;
	int n;
	while (cin >> n) {
		V.push_back(n);
	}
int x=oddcount(V);
cout<<x<<endl;
}