#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#include <cstdio>

/* TODO: write the recursive GCD function from lecture and make sure you
 * understand how it works.  In fact, make sure you can *prove* it works.
 * (Keep mind how we defined the size of the input as the size of the
 * second parameter.)
 * */
 /*
 NOTE:
 basically remember this: gcd(a,b)=gcd(b,r) while r=a%b and gcd(a,0)=a !
 */

int gcd(int a, int b)
{
	if(b==0)return a;
	return gcd(b, a%b);
}

/* TODO: try to write merge sort.  You can use vectors or arrays. */
//clues in inclass181mergesort.cpp but I will do this in 17 recursion file

/* TODO: write the *extended* GCD algorithm, which returns gcd(a,b), but
 * also sets u and v such that xa + yb = gcd(a,b) Warning: this might take a
 * little bit of thinking (if you don't just look up the answer online).  Save
 * it for last. */
int xgcd(int a, int b, int& x, int& y)
{
 // Base Case
    if (b == 0)
    {
        x = 1; // a= a.1 +b.0
        y = 0;	// 		 x    y
        return a;
    }
		//Now assume this thing works for all smaller inputs(smaller values of b)

    int xx, yy; // To store results of recursive call
		int q= a/b , r=a%b;
    int d = xgcd(b, r, xx, yy);
//now d= b. xx + r.yy
		//note a=qb+r
	//goal: find x,y st d=ax+by
		//but a=qb+r -> r=a-qb
//so d=b.xx + (a-qb).yy= a.yy+b(xx-q.yy)
		x=yy;
		y=xx-q*yy;
    return d;
}

void gcdTest()
{
	int a,b,d;
	cout << "Enter pairs of integers a,b for gcd test: ";
	while(cin >> a >> b) {
		d = gcd(a,b);
		printf("gcd(%i,%i) = %i\n",a,b,d);
	}
}

void xgcdTest()
{
	int a,b,d, x, y;
	cout<< "Enter pairs of integers a,b for Xgcd test: ";
	while(cin>>a>>b){
		d= xgcd(a,b,x,y);
		printf("xgcd(%i,%i) = %i\n", a, b, d);
		cout<<x<<"\n"<<y<<"\n";
	}
}

int main()
{
	//gcdTest();
	xgcdTest();

	return 0;
}
