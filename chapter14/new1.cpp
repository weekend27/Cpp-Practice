
//Dynamic memory allocation and release

#include <iostream>
using namespace std;

int main(){
	int sum = 0;
	int n = 0;

	cout << "Enter number of items: ";
	cin >> n;

	int *p = new int[n];

	for (int i = 0; i < n; i++){
		cout << "Enter item #" << i << ": ";
		cin >> p[i];
		sum += p[i];
	}

	cout << "Here are the items: ";
	for (int i = 0; i < n; i++)
		cout << p[i] << " ";
	//cout << "\b" << endl;
	cout << "\nThe total is: " << sum << endl;
	cout << "The average is: " << (double) sum / n << endl;

	delete [] p;

	return 0;
}

/*
Enter number of items: 3
Enter item #0: 34
Enter item #1: 56
Enter item #2: 71
Here are the items: 34 56 71 
The total is: 161
The average is: 53.6667
*/