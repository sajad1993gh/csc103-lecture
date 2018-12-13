/*sets are containers that store "unique" elements following a specific order
eg: set<int> myset;
    set<string> months;
by default a set keeps its elements in ascending order; Hence, begin()
points at the smallest element; end() points just past the largest
element in the set.
Search an element: find function returns an iterator pointing at it,
or end() if it is not found.
if(myset.find(3) !=myset.end())
cout<<"found it"<< "\n";
else cout<<"not found"<"\n";


    */
#include<iostream>
#include<set>
#include<string>
#include<map>
using std::set;
using std::map;
using std::cout;

int main()
{
  set<int> myset;
  for(int i=10; i>0; i--){
    myset.insert(2*i); // 20  18  16  14  12 ... 2
    cout<<myset.size()<< "\n";
  }

  for(set<int>::iterator it=myset.begin(); it!=myset.end(); it++){
    cout<<' '<< *it; // 2 4 6 8 ...
  }
    cout<<"\n";

  if(myset.find(3) !=myset.end())
  cout<<"found it"<< "\n";
  else cout<<" not found "<<"\n";

}