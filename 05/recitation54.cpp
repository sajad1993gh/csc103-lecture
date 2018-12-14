/* When a parameter is a "reference" or that the function is "called by reference", a reference parameter is an alias for its argument
When the argument value is copied, the parameter and argument are independent objects. We say such arguments are "passed by value" or that the function is "called by value". */
#include<iostream>
using namespace std;
void increase (int & x){  //void return type, in this function, x is the reference
  x++;
}
void increaseV2 (int x){ //this is another different function which isnt the reference, x is independent
  x++;
}

int main(){
  int a=-7;
  increase(a);
  cout<<a<< "\n"; //-6
  int b= -7;
  increaseV2(b);
  cout<<b<<endl; //-7
}