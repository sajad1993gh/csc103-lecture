#include<iostream>
using std::cin;
using std::cout;
using std::endl;


void f(int m,int n){
  if(n<=0 || m<=0) return;
  f(n-1,m);

  for(size_t i =0; i<n; i++){
    cout<<"0_0";
  }
  cout<<endl;

  for(size_t i =0; i<m; i++){
    cout<<"-_-";
  }
  cout<<endl;
     f(n,m-1);
}
void f2(int m, int n)
{
	if (n <= 0 || m <= 0) return;
	f(n-1,m);
	for (size_t i = 0; i < n; i++) {
		cout << "O_O";
	}
	cout << "\n";
	for (size_t i = 0; i < m; i++) {
		cout << "-_-";
	}
	cout << "\n\n";
	f(n,m-1);
}

int main(){
  f(2,2);
  cout<< "Correct one: \n\n";
  f2(2,2);
  return 0;
}

