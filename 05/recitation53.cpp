/* One-to-One correspondence between the arguments in a function (a) and the parameters in the function definition! */

#include<iostream>
using namespace std;

int perimeter (int length, int width){
  return 2*(length + width);
}

int main(){
  int a=-7;
  int b= abs(a); // this function is defined in the library by default. lol
  cout<<b<<endl;

  int l=5;
  int w=3;
  int p= perimeter(l,w);
  cout<< p << endl;

}