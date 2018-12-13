#include<vector>
using std::vector;
#include <iostream>
using std::cout;
using std::cin;
	//just the example in the note.pdf
int main(){
	cout<< "Note example:\n" ;
	vector<int> V;
	for(int i=0; i<10; i++){
		V.push_back(0);
	}
	int n;
	while(cin>>n){
		V[n]++;
	}
	for(int i=0; i<10; i++){
		cout<< V[i] << " " ;
		}
    cout<< "\n";

  return 0;
}