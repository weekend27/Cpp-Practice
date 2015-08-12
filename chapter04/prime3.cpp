
//look for primes
//Recursive function

#include <iostream>
#include <cmath>
using namespace std;

void get_divisors(int n);

int main(){
	int i; //Number to test for prime-ness

	//Get a number from the keyboard and initialize i.

	while (true){
		cout << "Enter a number (0 = exit) and press ENTER: ";
		cin >> i;
		if (i == 0)
			break;
		get_divisors(i);
		cout << endl;
	}
	return 0;
}

void get_divisors(int n){

	double sqrt_of_n = sqrt(n);

	for (int i = 2; i <= sqrt(n); i++){
		if (n % i == 0){
			cout << i << ", ";
			get_divisors(n / i);
			return;
		}
	}

	cout << n << endl;
}
