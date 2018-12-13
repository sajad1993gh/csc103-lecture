/* introduction to functions.
 * reading: Prof. Li's notes, lectures 7 -- 10 */
#include <iostream>
#include <cstdio>
#include<cmath>
using std::cin;
using std::cout;
using std::endl;

/* syntax:
 * datatype function_name(parameterlist) { c++ statements...}
 * think of f(x) from your calculus days... remember this notation?
 * f:R ---> R
 * Breaking it down, it says there is a function named f, which has domain R
 * and range R.  The C++ equivalent would be something like:
 * double f(double);
 * NOTE: thing above is called a "function prototype"
 */

/* example: x --> 2x + 1, for integers x.
 * */
int f(int x) {
	/* rules go here: */
	return 2*x + 1;
}

/* NOTE: we can have multi-parameter functions -- just separate each with
 * a comma, like this:
 * int f(int x, int y, int z) {...}
 * */
/* TERMINOLOGY: the variable used in the parameter
 * list (like x in fn2 or fn1) is called the *formal
 * parameter*.  When you actually make a call, like
 * fn(a) in main, the variable a is the *actual parameter*.
 * Again, for by value parameters, the formal parameter
 * is a COPY of the actual, and for by reference, it is
 * a SYNONYM for the actual.
 * */
int maximal(int x, int y, int z);
double average(double x, double y, double z);
void swap(int& x,int& y);
bool prime(int x);
int fib(int x);


int main()
{
 int x=3,y=5,z=4;
 cout<<"x= "<<x<<"  y= "<<y<<"  z= "<<z<<endl;
 int max= maximal(x,y,z);
 cout<<"Maximum: "<< max << endl;
 int ave= average(x,y,z);
 cout<<"Average: "<<ave<<endl;
 swap(x,y);
 cout<<"x= "<<x<<"  y= "<<y<<endl;
 cout<<"Prime? "<<endl;
 int isprime= prime(x);
 cout<< isprime<<endl;
 isprime= prime(y);
 cout<< isprime<<endl;
 isprime= prime(z);
 cout<< isprime<< endl;
 int fibo=fib(x);
 cout<<"The "<<x<<"-th term of fibo is: "<<fibo<<endl;



	return 0;
}


/* TODO: write a function that takes 3 integers and returns
 * the maximal value */
int maximal(int x, int y, int z){
 if(x>=y && x>=z)
  return x;
 else if(y>=x && y>=z)
  return y;
 else
  return z;
}
/* TODO: write a function that takes 3 doubles and returns the
 * average value */
double average(double x, double y, double z){
 return (x+y+z)/3;
}

/* TODO: write a function that takes two integer parameters and
 * swaps the contents, i.e., if x=2 and y=5, then after calling
 * swap(x,y), y=2 and x=5 */
void swap(int& x,int& y){
 int s;
 s=x;
 x=y;
 y=s;
}
/* TODO: write an isPrime function that takes an integer and returns a boolean
 * value indicating whether or not it is prime.  */
bool prime(int x){
  if (x<2)
      return false;

  else if (x==2)
      return true;

  else if(x%2==0)
    return false;

  else{
  for (int divisor=3; divisor<=sqrt(x) ; divisor+=2){

    if(x%divisor==0){
      return false;
      break;
  }
 }
  return true;
 }
}

/* TODO: write a *function* that takes an integer n and returns the
 * nth term in the Fibonacci sequence. */
int fib(int x){
 int ft=1, st=1, nt=2;
  for(int i=1; i<x ; i++){
   nt= ft + st;
   ft=st;
   st=nt;
  }
  return st;
 }

/* TODO: write test code for all the above exercises. */

//--------
/* TODO: (WARNING: THIS IS NOT EASY. Only attempt this if you are bored.)
 * The previous exercise asked for you to compute the nth term of the
 * Fibonacci sequence.  Try to estimate approximately how many steps (number
 * of C++ statements, roughly) that your function takes to evaluate the input
 * n.  You will probably find that it is close to some constant multiple of n.
 * It turns out that there is a very clever way to do this in approximately
 * log(n) steps!  To find it, you'll probably need a hint or two to even get
 * started.  Ask me if you're interested.
 * */
