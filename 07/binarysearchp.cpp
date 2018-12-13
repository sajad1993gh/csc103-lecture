/* Exercise: write a *binary search* on a sorted vector.  The idea is to
 * kind of emulate the process you use to find a particular page in a book:
 * 1. open the book to some page in the middle.
 * 2. if the page number was too high, open to the middle of the pages to the
 *    left; if it was too low, open to the middle of the pages to the right
 * 3. continue as above until you found the right page.
 *
 * This might be a little challenging.  Ask questions if you get stuck.
 * */
#include<iostream>
#include<vector>
using namespace std;

bool binarySearch(const vector<int>& V, int x)
{
  int low=0; // by changing to size_t, inputting -44.5, or 3.5 decimal point numbers give us , wrong answer
  int high=V.size()-1;

  while(low<=high){
    int mid=(low+high)/2 ;
    if(x==V[mid]) return true;
    if(x>V[mid])
      low= mid+1;
    else
      high= mid-1;
  }
  return false;
}

int main()
{
	vector<int> V;
	int n;
	while (cin >> n) {
		V.push_back(n);
	}

	if(binarySearch(V,23))
		cout << "23 was found.\n";
	else cout << "23 was not found.\n";

}