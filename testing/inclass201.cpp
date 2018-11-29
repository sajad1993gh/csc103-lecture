/*
talking about P(s). in your notes...
P(s)= T U T* . T=P(s') . T*= adding an x to each element of T.
*/

#include<iostream>
#include<set>
using namespace std;

set<set<int>> powerset(const set<int>& S)
{
  //return set<set<int>>(set<int>().1);
  if(S.size()==0){
  set<set<int>> P;
  set<int> E;
  P.insert (E);
  return P;
}
//now assume powerset works on any input of smaller size than S(of fewer elements)
  set<int> Sp(S);// make S' a copy of S . putting paranteses it constructs a copy !
  int x = *Sp.begin(); // because Sp.begin() is an iterator!!!! so add *
  //remove x from S
  Sp.erase(x); //now S'= S\{x}
  set<set<int>> T= powerset(Sp);
  set<set<int>> P(T);//copy all of T into P
  //what is P missing? all subsets with an x
  for(set<set<int>>::iterator i= T.begin(); i!=T.end(); i++){
  set<int> u(*i);
    u.insert(x);
    P.insert(u);

  }
  return P;

}

int main()
{
  set<int> S={0,1,2};
  set<set<int>> P= powerset(S);
  //print
  cout<<"\n";
  for(set<set<int>>::iterator i= P.begin(); i!=P.end(); i++){
    cout<<" { ";
  for(set<set<int>>::iterator j= (*j).begin(); j!=(*j).end(); j++){
      cout<< *j << " ";
        }
        cout<< " } ";
  }

  return 0;
}