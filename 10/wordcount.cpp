#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;
#include <vector>
using std::vector;
/* TODO: write a function to count the number of words in a file. finish writing this example from class, and extend it
 * to work even if the string has newlines or tabs in it. */
size_t countwords(const string& s)
{
  bool justreadspace =true;
  size_t count =0;
  for (size_t i=0; i<s.length() ; i++){
    char c= s[i];//current char, as a shortcut
      if (justreadspace){
       //if(c==' ') //nothing to do for now
        if(c!= ' '){
        count++; //begining of words
        justreadspace = false;
      }
  }
  else {
    if(c==' '){
      i=i+1;
      if(s[i]=='\"'){
        i=i+1;
        if(s[i]=='n' || s[i]=='t')
          justreadspace =true;
        }
  justreadspace =true;
      }
    }
  }//end loop

  return count;
}
/* TODO: write this modified version which, in addition to returning the count
 * of the words, also stores the individual words in the vector l. */
size_t countwords2(const string& s, vector<string>& l)
{
   bool justreadspace =true;
  size_t count =0;
  for (size_t i=0; i<s.length() ; i++){
    char c= s[i];//current char, as a shortcut
      if (justreadspace){
       //if(c==' ') //nothing to do for now
        if(c!= ' '){
        count++; //begining of words
        justreadspace = false;
      }
  }
  else {
    //for(size_t q=0; q<l.size(); q++){
      //l.push_back(c);
    //}      //storing the words in the vector l;
    if(c==' '){
      i=i+1;
      if(s[i]=='\"'){
        i=i+1;
        if(s[i]=='n' || s[i]=='t')
          justreadspace =true;
        }
  justreadspace =true;
      }
    }
  }//end loop

  return count;
}


int main(){
  const string s="Hi, How are you ?! \n I'm fine \t okay! ";
  vector<string> l;
  size_t count= countwords(s);
  cout<< count << endl;
  //countwords2(s, l);
  //for(size_t i=0; i<l.size(); i++){
  //  cout<<l[i] ;
  //}
  //cout<< endl;

return 0;
}







