/* A function is a block of code with a name
syntax: <type> <function name> (<parameter list>){
          <sequence of statements>
        }

eg: absolute value: */

//function:
  #include<iostream>
  using namespace std;
int abs(int x){
  if (x>=0) return x;
  else return -x;
  }

 //program:

  int main(){

  int a=-7;
  int b=abs(a);
  cout<<b<<endl;

}
