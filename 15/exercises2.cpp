/* TODO: write a program that reads lines of text from stdin, printing out
 * only the first occurrence of each line.  (Basically this is the `uniq`
 * program already on your computer, but we won't require the input to be
 * sorted.)  You could use sets or maps for this, btw. */

#include<iostream>
#include<map>
#include<set>
#include<vector>
using namespace std;

int main()
 {
   map<string,int> M;
   string s;
   while(getline(cin,s)){
    M[s]++;
   }
   cout<< "\n";
   for(map<string,int>::iterator i=M.begin(); i!=M.end(); i++){

        cout << (*i).first << ", ";

      }
  cout<<"\n";
return 0;
  }


