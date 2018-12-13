//function of intersection and Union of two sets:

#include<iostream>
#include<set>
using namespace std;


set<int> intersection(const set<int>&S1 , const set<int>& S2)
{
  set<int> I;
  for(set<int>::iterator i= S1.begin(); i !=S1.end(); i++){
    if(S2.find(*i) != S2.end())
      I.insert(*i);
  }

    return I;
}
set<int> Union(const set<int>&S1 , const set<int>&S2)
{
  set<int> U=S1;
  for(set<int>:: iterator i=S2.begin(); i!=S2.end(); i++){
    U.insert(*i);
  }
  return U;
}

void intTest() {
	set<int> s1 = {2,3,4,5,6,7};
	set<int> s2 = {1,2,4,7,11,44};
	set<int> s3 = intersection (s1,s2);
	set<int> s4 = Union(s1,s2);

	cout << "intersection contained: ";
	for (set<int>::iterator i = s3.begin(); i != s3.end(); i++) {
		cout << *i << " ";
	}
	cout << "\nUnion contained: ";
	for (set<int>::iterator i = s4.begin(); i != s4.end(); i++) {
		cout << *i << " ";
	}
	cout << "\n";
}


int main()
{
  intTest();

  return 0;
}