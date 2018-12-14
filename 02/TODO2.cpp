#include <iostream>
using std::cout;
using std::cin;

int main(){
double x;
double sum;
cout<<"Enter your first numbers?" << "\n";

cin>>x ;
  sum+=x;
  cout<<"Enter your second numbers?" << "\n";
cin>>x ;
  sum +=x ;

  cout<<"Enter your third numbers?" << "\n";
  cin>>x ;
  sum+=x ;
  cout<<"Enter your fourth numbers?" << "\n";
  cin>>x ;
  sum+=x ;
  cout<<"Enter your last numbers?" << "\n";
  cin>>x ;
  sum+=x;
cout<< "The average is " << sum/5 << "\n" ;

return 0;
}