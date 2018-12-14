#include<iostream>
#include<limits.h>
using namespace std;
int main(){
int s,s2,x;
  cout<<"Enter your numbers with a letter in the end?\n";
  cin>>s;
  while(cin>>x){

  if(x<s){
    s2=s;
    s=x;

  }
  if((x>s)&&(x<s2)){
    s2=x;
}

}

    cout<< "The Second Smallest number is: "<<s2<<endl;


}
