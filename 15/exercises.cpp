/* TODO: re-write the frequency table example from scratch and make sure you
 * understand why it works.
 #include<iostream>
 #include<map>
 #include<vector>

 using namespace std;

 int main()
 {
  map<string,int> M;
  string s;
  while(cin>>s){
   M[s]++;
  }
  for(map<string,int>::iterator i=M.begin(); i!=M.end(); i++){
   cout<< (*i).first << ":  "<<(*i).second << "\n";
  }

  return 0;
 }
 */
/* TODO: try to solve the frequency table problem *WITHOUT* using maps!  Can
 * you do it with just vectors?  How about just sets?  */
 #include<iostream>
 #include<map>
 #include<vector>
using namespace std;

int main()
 {

  string s;
  string a;
  vector<string> F;
  vector<int> count;


  while(cin>>s){
   if(s!=a){
    F.push_back(s);
    count.push_back(1);
      }
    else count[1]++;
    a=s;
     }

      cout<< "\n"; //just printing:
        for(int i=0; i<F.size(); i++){
         cout<< F[i] << ": " << count[i] << "  ";
        }
      cout<< "\n";

return 0;
 }

/* TODO: if you managed to solve the above, estimate the number of
 * instructions your program will require to run on an input of n strings.
 * Then compare this with the solution using maps.  Note that M[s]++ takes
 * approximately log(n) steps if the map has n different strings. */


/* TODO: write a program that reads lines of text from stdin, printing out
 * only the first occurrence of each line.  (Basically this is the `uniq`
 * program already on your computer, but we won't require the input to be
 * sorted.)  You could use sets or maps for this, btw. */


/* TODO: Compare/contrast vector<int> with map<int,int>.  (This does not
 * involve programming, just thinking.) */
