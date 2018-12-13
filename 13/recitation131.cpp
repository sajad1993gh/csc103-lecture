/* map notes go here:
  maps are associatiove arrays
  map<key_type, data_type>;

  map<string, char> grade_list;
  Rename an element: grade_list.erase("John");


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

  map<string, char> grade_list;
  grade_list["John"]='A';
  grade_list["Tom"]='B';

  if(grade_list.find("Tim")!=grade_list.end()){//search for an element
    cout<<"Tim is in the map"<<"\n";
  }

  for(map<string,char>::iterator i=grade_list.begin(); i!=grade_list.end(); i++){ //out put
    cout<<(*i).first<<"\t"<<(*i).second<<"\n";
  }





}