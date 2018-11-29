#include<iostream> //testing git 1 2 3
using std::cin;
using std::cout;
using std::endl;
#include <cstdio>
/*
// TODO: write a recursive function that prints the base 10 digits of n
// vertically to cout.  for example, printVertically(2358) would print
// 2
// 3
// 5
// 8
// Rules: you can't use any loops.  You can't use vectors or arrays.
// Just let the recursive function calls do the work for you.
void printVertically(unsigned long n)
{
	if(n<10){
		cout<<n<<"\n";
	}
	else{
		// cout<<(n%10)<<"\n"; // NOTE: 8,5,3,2
		printVertically(n/10);
		cout<<(n%10)<<"\n"; // 2,3,5,8
	}

}

bool search(int* A, int size, int x)
{
	/* TODO: Try to write a "recursive version of binary search".
	 * Outline:
	 * 1. if the array is empty (size < 1) return false.
	 * 2. if x is less than the value in the middle, recursively search
	 *    the left subarray, else recursively search the right subarray.
	 * Test out your program, and try to prove (by induction) that it works.
	 * (There are some subtle points about making sure the size is always
	 * decreasing...)
	 * */
	 /*
	int first= 0;
	int last= size-1;
	int mid= (first+last)/2 ;
	if(size<1)
		return false;
	else{
	if(x== A[mid]) return true;
	else if(x< A[mid]){
		search(A, (mid-1) , x);
	}
	else{
		search(A, (mid+1) , x);
		}
	}
}
*/

/* TODO: try to write down that recursive sorting algorithm we outlined
 * during class.  This might not be easy, but it's a good exercise.  To
 * help you get started, here are some plausible prototypes:
 * */

/* merge L and R (which are both sorted, and of sizes nL,nR respectively)
 * into the array S (which you can assume has enough space). */
void merge(int* L, size_t nL, int* R, size_t nR, int* S)
{ //we fill S with element of L and R in sorted order.
	int iL=0, iR=0, iS=0;
	while(iL<nL && iR<nR){ //while both still have elements
		if(L[iL]<R[iR]){
			S[iS++] = L[iL++];
		}
		else{
			S[iS++] = R[iR++];
		}
	}
	//one ran out..
	while(iL < nL) S[iS++] = L[iL++];
	while(iR < nR) S[iS++] = R[iR++];
}
/* Sort the array A (of size n) using the array aux (which should
 * also have at least n elements) as auxillary storage for the
 * merge operations (see merge(...) above).  */
void mergeSort(int* A, size_t n, int* aux)
{  /* IDEA: take care of a base case (like, say n < 2), and
	 * then break array in two equal(-ish) pieces and recursively
	 * sort both.  Then use the merge function to recombine them
	 * into a completely sorted array.  See example call from main().
	 * */
	int mid= n/2;
	if(n < 2){
		return;
	}

	mergeSort(A, mid, aux);
	mergeSort(A+mid, n-mid, aux);
	merge(A, mid, A+mid, n-mid, aux);
	for(int i=0;i< n; i++){
		A[i]=aux[i];
	}
}


int main()
{
	//printVertically(2358);
	/* how to call merge sort: */
	int A[10] = {30,4,9,8,7,85,33,61,28,39};
	//cout<< "search result:\n" << search(A, 10, 2) <<"\n"; //true==found !!
	int aux[10]; /* auxillary space for merging. */
	for (size_t i = 0; i < 10; i++) {
		printf("A[%lu] = %i\n",i,A[i]);
	}
	cout<<"sort and merge result:\n";
	mergeSort(A,10,aux);

	for (size_t i = 0; i < 10; i++) {
		cout<<"A["<<i<<"] = " << A[i]<<"\n";
	}
	return 0;
}
