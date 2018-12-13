#include<iostream>
#include<map>
#include<set>

using namespace std;
int main()
{
  set<string> Ignore;
  Ignore.insert("a");
  Ignore.insert("the");
  string word;
  map<string, int> M;
  while(cin>> word){
    if(Ignore.find(word) == Ignore.end())
      M[word]++;
  }
for(map<string, int>::iterator i=M.begin(); i!=M.end(); i++)
  {
    cout<<(*i).first << " : " << (*i).second << "\n";
  }

  return 0;
}