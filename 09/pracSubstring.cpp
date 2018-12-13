#include<iostream>
#include<string>
using namespace std;
/* TODO: write a function that takes two strings and returns an integer value
 * indicating whether or not the first was a substring of the second.  Remember
 * that the return value should be the index at which the string was found, or
 * -1 to indicate that the string was not found.  NOTE: this might be a little
 * tough.  Maybe do it last.
 * */
 //not very successfull
int isSubstring(const string& s1, const string& s2) {
    int index= -1;
    bool b= false;
  if(s2.length()> s1.length())
    return index;
  else{

  for(int i=0; i<s1.length() ; i++){
    if(s1[i]==s2[i]){
      for(int j=i+1 ; j<s1.length() ; j++){
        if(!(s1[j]==s2[j])){
        b=false;
        break;
        }
        else
          b= true;
  }
  if(b==true)
    index= s1.length() -i-1;
    }

}
}
return index;
}

int main()
{
  char r;
  string parent= "abcdefghi ";
  string substring= "fghi";
  size_t pos= parent.find(substring); //position of substring in string

  cout<< parent << endl<< substring << endl;
  if(size_t pos= parent.find(substring))
    cout<< pos << endl;
  else
    cout<< -1 << endl;

  cout<< "manual function  " << isSubstring(parent, substring) << endl;

}