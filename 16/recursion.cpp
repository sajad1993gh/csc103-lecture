#include <iostream>
#include<cstdlib> //for exit
using std::cin;
using std::cout;
int power(int x, int n);
int fibonacci(int n);

void f(int n)
{
	if (n<1) return;
	f(n-1);
	cout << "n == " << n << "\n"; // 1,2,3,4,5
}

int fac(int n)
{
	/* explicitly solve problem for small value of n: */
	if (n == 0) return 1;
	/* now assuming we get the right answer *on smaller inputs*,
	 * build the answer for n: */
	return fac(n-1) * n;
}
/* NOTE: the above would be better suited as a loop, but it
 * is an easy example to demonstrate the basics of recursion. */

int main()
{
	f(5);
	cout<<"\n"<< fac(4) << "\n";
	cout<<"\n" << power(5,3) <<"\n";
	cout<<"\n" << fibonacci(5) <<"\n"; //8
	return 0;
}

/* TODO: review mathematical induction, and if possible practice
 * some proofs.  Done
		*/
/* TODO: write a recursive function to compute x^n (x to the n power)
 * where n is an integer. */
int power(int x, int n)
{
	if(n<0){
		cout<<"invalid exponent!\n";
		exit(1);
	}
	if(n>0){
		return (power(x,n-1)*x);
	}
	else{//n==0 base case;
		return 1; //NOTE: I guess when it gets to this point, it's stored
							//three 5's so the answer would be:1*5*5*5 = 125
	}
}
/* TODO: write a function that recursively computes terms of the
 * fibonacci sequence.  Be careful -- it will likely be quite
 * slow on large inputs!  See if you can understand why. */
//NOTE NOTE this is the slow version, read the fast one in lecture 17;
int fibonacci(int n)
{
	if(n<2) return 1;
	return fibonacci(n-1)+fibonacci(n-2);

}
