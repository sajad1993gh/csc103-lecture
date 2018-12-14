/*Project2 Prime test
//Def A number n>1 is prime if it has no positive divisors other than 1 and itself.
k is a divisors of n: n%k==0 , k is not a divisors of n: n%k !=0
if n>3:
n%k !=0 for every k in 2.....n-1, then n is prime!
if there exists a k such that n%k==0, n is not prime!
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <cmath>

int main(){
  unsigned long n;
  label:
  while(cin>> n){
  if (n<2)
      cout<< false << endl;

  else if (n==2)
      cout << true << endl;

  else if(n%2==0)
    cout<<false<<endl;

  else{
  for (int k=3; k<=sqrt(n) ; k+=2){

    if(n%k==0){
      cout<< false<< endl;
      goto label;
  }
}

      cout<<true<<endl;
}
}
return 0;
}

