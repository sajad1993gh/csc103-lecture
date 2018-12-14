//sorting algorithm

#include<iostream>
using namespace std;

int main(){
  int min,i,j,n,loc,temp,a[100];
  cout<<"Enter the number of elements? "<<endl;
  cin>>n;
  cout<<"Enter your elements? \n";
  for(i=0; i<n; i++){
    cin>>a[i];
  }
  for(i=0;i<n-1 ; i++){
        min= a[i];
        loc=i;
    for(j=i+1; j<n; j++){
      if(min>a[j]){
        min=a[j];
        loc=j;
      }
    }

   temp=a[i];
    a[i]=a[loc];
    a[loc]=temp;

  }
  cout<<"\nSorted list is as follows: ";

  for(i=0; i<n; i++){
    cout<<a[i]<<" ";
  }

return 0;
}