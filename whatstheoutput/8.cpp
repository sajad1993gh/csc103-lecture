#include <iostream>
using std::cout;
//Study this!
void f(int m, int n)
{
	if (n <= 0 || m <= 0) return;
	f(n-1,m); // here, output from the end to beginning
	for (size_t i = 0; i < n; i++) {
		cout << "O_O";
	}
	cout << "\n";
	for (size_t i = 0; i < m; i++) {
		cout << "-_-";
	}
	cout << "\n\n";
	f(n,m-1); //here, output from the beginning to end
}

int main()
{
	f(2,2);
	return 0;
}
//NOTE:: if recursion is first, recursion needs to be done first, so cout everything from the end to beginning
//if recursion is last in the function, cout everything from the beginning to end.