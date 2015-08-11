
//an example to use &&

#include <iostream>
using namespace std;

int main(){
	int n;

	cout << "Enter an age and press ENTER: ";
	cin >> n;

	if (n > 12 && n < 20)
		cout << "Subject is a teenager." << endl;
	else
		cout << "Subject is not a teenager." << endl;

	return 0;
}