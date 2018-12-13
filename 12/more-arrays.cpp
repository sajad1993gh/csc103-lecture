/* more practice with arrays + vectors. */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <cstdlib>
#include <time.h>

/* example: polynomial evaluation.
 * We'll represent a polynomial by its array of coefficients:
 * f(x) = a_0 + a_1x + a_2x^2..., we'll just store [a_0...]
 * to represent it.  Let's work over integers.  */
int polyEval(int* a, size_t d, int x)
{

	/* TODO: write this.  Try to do it without looking much at the
	 * notes from lecture.
	 * */
	int sum=0;
	int powxi= 1;
	for(int i=0; i<=d ; i++){
		// old version: sum += a[i] * pow(x,i);
		sum+= a[i] * powxi ;
		powxi *=x ;
	}
	return sum;
}
/* TODO: Think about what changes you would make to the above in
 * order to use vectors instead of plain arrays.  At least write
 * a prototype for a vector version of the function. */

/* TODO: (challenge problem!)  Try re-write the polyEval function
 * so that it performs only one multiplication in each iteration of
 * the loop (and some small constant number of additions).  */
int hornerEval(int a[], size_t d, int x)
{
	int sum=a[d];
	for(int i=1; i<=d; i++){
		sum = (sum*x + a[d-i]);
	}
	return sum;
}

/* TODO: write a function that takes an array, and its size, and applies
 * a random permutation to the array.  For random number generation, use
 * the rand function from the CRT.   I've updated the main() function to
 * show you an example, and added cstdlib + time.h to the includes.
 * NOTE: I want you to (under the assumption that rand() actually gives you
 * random numbers) produce a permutation which is *uniformly random* among
 * the set of all permutations.  HINT: think about how you count them.
 * There are n choices for the first element, n-1 for the second, and so on.
 * */

void randPerm(int* A, size_t n)
{
	int x=rand();
	srand(time(0));
	for(int i=0; i<n; i++){
	int temp=A[i];
	A[i]= A[rand()% (i+1)];
	A[rand()% (i+1)]=temp;

	}
}

int main() {
	int A[] = {3,7,2}; // 3 + 7x + 2x^2
	cout << "enter an integer: ";
	int x;
	cin >> x;
	cout << "f(" << x << ") = " << polyEval(A,2,x) << endl;
	cout << "f(" << x << ") = " << hornerEval(A,2,x) << endl;
	cout<< endl;

	randPerm(A,3);
	for(int i=0; i<3; i++){
		cout<<A[i]<< ", ";
	}
	cout<<endl;

	/* NOTE: you will need random numbers of course for the above exercise.
	 * Here is how you can get them: */
	// random number test:
	cout << "random number: " << rand() << endl;
	// the above number will always be the same, unless you set the seed
	// like this:
	srand(time(0));
	// now these will be different:
	cout << "more random numbers: " << rand() << ",  " << rand()<< "\n" << endl;

}
