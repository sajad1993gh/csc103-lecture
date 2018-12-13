/* arrays and pointers. */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
void swap(int *q1, int* q2);
void shift(int* A /* the array */,
		size_t len /* #elements of A */,
		size_t n /* shift amount */);
int main() {
	/* ARRAYS: OVERVIEW
	 * Arrays in C/C++: kind of like a "dumb" version of std::vector.
	 * It has no concept of its size.  It has no fancy member functions
	 * like push_back, etc... */

	/* DECLARATION AND USE */
	const size_t size = 10;
	int A[size]; /* A is an array of 10 integers. */
	for (size_t i = 0; i < size; i++) {
		/* store list of cubes in the array: */
		A[i] = i*i*i; /* use the bracket operator to
		                  access elements, just like vectors */
	}

	/* WHAT'S *REALLY* IN AN ARRAY? */
	cout << "A == " << A << endl;
	/* A only contains a memory address!  This is the address
	 * of the first element A[0]
	 * NOTE: in reality, for static arrays there is no A, but for
	 * most intents and purposes you can think of every array as
	 * simply a pointer to its first element. */

	/* POINTERS: OVERVIEW
	 * They are just *variables that hold a memory address*.
	 * That's it!  Very simple!  E.g., our array A is a pointer.
	 * */

	/* POINTERS: MECHANICS
	 * What kinds of things might we want to do with pointers?
	 * Well the obvious ones are:
	 * 1.  declare them
	 * 2.  initialize them
	 * 3.  read to and write from the memory cell to which the pointer
	 *     points.
	 * */

	/* 1. declarations */
	int* p; /* declare a pointer.  Note the '*'.  Also acceptable
	           (and instructive) is to declare it as int *p;  In either
			   case, *p is of type int, and p is the address of that int. */
	#if 0
	/* NOTE: you could initialize the pointer by directly writing an address
	 * like this: */
	p = (int*) 4;
	/* and then try to write to that memory cell, like this: */
	*p = 17;
	/* TODO: change the above "#if 0" to "#if 1", compile, run, and take
	 * note of the error.  Sadly, it won't be the last time you see it...  SEGMENTATION FAULT I think because the pointer did get declared twice with #if 1*/
	#endif

	/* 2. initialization via "address-of"
	 * Much more useful than just writng a literal address, is storing the
	 * address of an existing variable.  This is done via the "address-of"
	 * operator, like so: */
	int x = 17;
	p = &x; /* read: "p gets the address of x." */
	/* NOTE: at this point, x and *p are synonyms.  Whatever happens to one
	 * will happen to the other: */
	cout << "p == " << p << "\tx == " << x << endl;

	/* 3. read/write using "dereference operator" */

	cout << "this is what's at the address stored in p: " << *p  << endl;
	(*p)++; /* NOTE: parens are actually important. */
	cout << "p == " << p << "\tx == " << x << endl;

	/* TODO: think carefully (and draw pictures!), and see if you can predict
	 * the output of the following code before you run it: */
	int y = 23;
	int* q = &y;
	cout<< "\n" ;
	cout << "p == " << p << "\tx == " << x << endl;
	cout << "q == " << q << "\ty == " << y << endl;
	cout << "::: setting p = q;\n";
	p = q;
	(*q)++;
	cout << "p == " << p << "\t *p == "<< *p << "\tx == " << x << endl;
	cout << "q == " << q << "\t *q == "<< *q << "\ty == " << y << endl;

	/* Back to arrays for a moment:  what does the bracket notation (A[i])
	 * actually mean?  It is simply an addition of pointers, followed by
	 * a dereference: A[i] == *(A+i) as it turns out.  There are
	 * even funny consequences of this -- instead of A[i], you can instead
	 * write i[A] (but I don't recommend it!) */
	char B[10];
	for (size_t i = 0; i < 10; i++) {
		B[i] = 'a' + i;
	}
	for (size_t i = 0; i < 10; i++) {
		/* B[i] == *(B+i) == *(i+B) == i[B] */
		cout << i << "[B] == " << i[B] << endl;
	}


	/* TODO: declare another pointer (say p2) to a character, initialize it
	 * just as we did before, and print out (p+i) and then (p2+i) for small
	 * values of i. Notice that the difference in memory addresses changes. */
	cout<< "TODOs:\n\n" ;
	char h='h';
	char l='l';
	char *p1= &h;
	char *p2= &l;
	cout<< p1 << "   "<<*p1<<"   " << p2<< "   " <<*p2 << "\n"<< (p1+3)<< "     " << *(p1+3) << "    " << (p2+3)<<"    "<<*(p2+3) << "\n TODO2:"<<endl;

	int a=1;
	int b=2;
	int *z1= &a;
	int *z2= &b;
	swap(z1, z2);
	cout<< endl;
	//shift test
	int array[]={1,2,3,4,5};
	int* point= array;

	size_t len=5;
	size_t n=2;
	shift(point,len,n);
	for(int i=0; i<len; i++){
		cout<<array[i]<< endl;
	}
	cout<< endl;


	return 0;
}

/* TODO: write a function that returns void, and takes two
 * POINTERS to integers, and swaps the contents of those two
 * memory locations.  Note: part of this exercise is understanding
 * what I'm asking for...
 * */

void swap(int *q1, int* q2){
		cout<< *q1 << "\t" << *q2 <<endl;
		int* temp= q1;
		q1=q2;
		q2=temp;
		cout<< *q1 << "\t" << *q2 <<endl;
}


/* TODO: if the type of p is int*, can you guess what the
 * type of &p would be?  ANS:It would be int ?*/

/* TODO: write a function that performs a "circular shift" on
 * an array of integers.  For example, if the input array
 * contained 0,1,2,3,4 and we shifted by 2, the new array would
 * contain 3,4,0,1,2.
 * NOTE: you can do this with a CONSTANT AMOUNT OF ADDITIONAL STORAGE.
 * That is, irrespective of the size of the array, your function should
 * allocate the same, fixed amount of storage.  No vectors.  No additional
 * arrays.  Just a few integers.  Try it!  (Kind of hard though.)
 * Moreover, do this without repeatedly shifting the array which will
 * take n*len steps.  You should be able to do this in c*len steps
 * for some small constant c, not depending on len.
 * */

void shift(int* A /* the array */,
		size_t len /* #elements of A */,
		size_t n /* shift amount */)
{
		for(size_t i=0; i<len/2 ; i++){
			int temp=A[i];
			A[i]=A[len-i-1];
			A[len-i-1]=temp;
		}
		for(size_t i=0; i<=((n-1)/2) ;i++){
			int temp=A[i];
			A[i]=A[n-1-i];
			A[n-1-i]=temp;
		}
		int z=1;
		for(size_t i=n; i<((len-n/2)+n); i++){
			int temp=A[i];
			A[i]=A[len-z];
			A[len-z]=temp;
			z++;
		}



}


