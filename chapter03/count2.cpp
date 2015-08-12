
//display integers from 1 to N
//use for loop

#include <iostream>
using namespace std;

int main(){
	int i, n;

	//Get a number from the keyboard and initialize i.

	cout << "Enter a number and press ENTER: ";
	cin >> n;
	
	for (i = 1; i <= n; i++)
		cout << i << " ";

	cout << endl;

	return 0;
}