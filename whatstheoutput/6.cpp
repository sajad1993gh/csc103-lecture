#include <iostream>
using std::cout;
using std::endl;

/* TODO: predict the output of this program *without* running it!
 * Then compile and run it to check your answers and make sure you
 * understand what is going on if any of your guesses were wrong. */

int main()
{
    int A[5] = {0,2,4,6,8};
    cout << A[1] << endl; //2
    cout << ++A[2] << endl; //5
    cout << *A << endl; //0
    int* p = &A[3];
    cout << *(p--) << endl; //6
    cout << *p << endl; //5
    return 0;
}
