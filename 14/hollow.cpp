#include<iostream>
#include<vector>
using namespace std;

int main()
{
//make a hollow rectangulaur 10 rows and 5 columns with space in between

  for(int i=0; i<10; i++){
    for(int j=0; j<5 ; j++){
      if ( i==0 || j==0 || i==9 || (j==4) ) cout<<"* ";
      else cout<<"  ";

    }
    cout<< "\n";
  }
  cout<<"\n";



  return 0;
}