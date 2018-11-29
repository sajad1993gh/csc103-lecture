/* TODO: without looking back at the solution, write the powerset
 * function from scratch.  Try a version that works on vectors
 * instead of sets. */
#include <set>
using std::set;
#include <iostream>
using std::cin;
using std::cout;
#include<vector>
using std::vector;
/*
set<set<int>> powerset( const set<int>& S)
{
 if(S.size()==0){
  //return set<set<int>(set<int>(),1);
  set<set<int>> P;
  set<int> E;
  P.insert(E);
  return P;
}

 set<int> Sp(S);
 int x= *Sp.begin();
 Sp.erase(x);

 set<set<int>> T=powerset(Sp);
 set<set<int>> P(T);
 for(set<set<int>>::iterator i=T.begin(); i!=T.end(); i++){
  set<int> u(*i);
  u.insert(x);
  P.insert(u);
 }
 return P;
}
*/

//VECTORS:
vector<vector<int> > powerSet(vector<int>& V) {
	/* base case: */
	size_t n = V.size();
	if (n == 0) {
		/* return vector containing an empty vector: */
		// return vector<vector<int> >(vector<int>(),1);
		vector<int> empty;
		vector<vector<int> > r;
		r.push_back(empty);
		return r;
		/* here's the same thing using a nice constructor: */
		// return vector<vector<int> >(1,vector<int>());
	}
	/* general case: compute answer for V[0...size-2] store
	 * this in U.  Then add to U all of its own elements
	 * with a V[size-1] pushed to the back. */
	/* remove last element from V */
	int last = V[n-1];
	V.pop_back();
	vector<vector<int> > U = powerSet(V); /* NOTE: V is smaller now */
	size_t usize = U.size(); /* should be 2^{n-1} */
	for (size_t i = 0; i < usize; i++) {
		/* add last to U[i] */
		vector<int> T = U[i];
		T.push_back(last);
		U.push_back(T);
	}
	return U;

}


int main()
{/*
 set<int> S = {0,1,2};
	set<set<int>> P = powerset(S);

	// now print result:
	cout << "{\n";
	for (set<set<int>>::iterator i = P.begin(); i!=P.end(); i++) {
		cout << "  { ";
		for (set<int>::iterator j = (*i).begin(); j!=(*i).end(); j++) {
			cout << *j << " ";
		}
		cout << "}\n";
	}
	cout << "}\n";
  */
 vector<int> V = {0,1,2};
	vector<vector<int>> P = powerSet(V); //testing with vectors
	// now print result:
	cout << "{\n";
	for (int i=0; i< P.size(); i++) {
		cout << "  { ";
		for (int j=0; j< P[i].size(); j++) {
			cout << P[i][j] << " ";
		}
		cout << "}\n";
   }
	cout << "}\n";


	return 0;
}


/* TODO: trace sequence of function calls on a set of 3 elements. */
//Kinda done...

/* TODO: try to write another version of the power set function
 * that divides the set into two disjoint subsets of equal(ish)
 * size, computes the powersets of those recursively, and then
 * puts them back together.  It is essentially the same idea as
 * the above.  Bonus question: prove your algorithm works, and
 * that it requires approximately the same number of steps as
 * the original. */
