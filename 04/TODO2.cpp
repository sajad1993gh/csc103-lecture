#include<iostream>

using namespace std;

int main(){
  int n;
  int k;
  cout<< "Enter your integers? "<<endl;
  while(cin>>n>>k){
    if(n==k*k*k){
      cout<< "It's a perfect cube! Look: \n" << k <<"*"<< k << "*"<<k<< " = "<<n<<endl;

    }
    else{
      cout<<"Nah!\n";
    }


  }
}