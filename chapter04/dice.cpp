
//Random number

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int rand_0toN1(int n);

int main(){
	int n, i;
	int r;

	srand(time(NULL));		//set seed for random numbers

	cout << "Enter number of dice to roll: ";
	cin >> n;

	for (i = 1; i <= n; i++){
		r = rand_0toN1(6) + 1;
		cout << r << " ";
	}
	cout << endl;

	return 0;
}

int rand_0toN1(int n){
	return rand() % n;
}