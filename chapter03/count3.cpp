
//display integers from 1 to N
//use for loop, and use temporary variable

#include <iostream>
using namespace std;

int main(){
	int n;

	//Get a number from the keyboard and initialize i.

	cout << "Enter a number and press ENTER: ";
	cin >> n;
	
	for (int i = 1; i <= n; i++)
		cout << i << " ";

	cout << endl;

	return 0;
}