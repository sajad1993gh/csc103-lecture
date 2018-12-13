#include<iostream>
#include<string>
using namespace std;

void reverse(const string&s)
{
  char temp;
  size_t l= s.lenght();
  for(int i=0; i<l/2 ; i++){
  temp= s[i];
  s[i]=s[l-i-1];
  s[l-i-1]=temp;
  }
}

int main()
{
  char r;
  string s;
  while(cin>> r){
    s += r;
  }
  for(int i=0; i<s.lenght; i++){
    cout<< s[i] ;
  }
  reverse(s);
  for(int i=0; i<s.lenght;i++){
    cout<< s[i];
  }




}