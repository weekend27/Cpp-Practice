
//look for primes

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n; //Number to test for prime-ness
	int i; //Loop counter
	int is_prime = true;

	//Get a number from the keyboard and initialize i.

	cout << "Enter a number and press ENTER: ";
	cin >> n;

	//Test for prime by checking for divisibility
	// by all whole numbers from 2 to sqrt(n).

	i = 2;
	while (i <= sqrt(n)){
		if (n % i == 0)
			is_prime = false;
		i++;
	}

	// Print results

	if (is_prime)
		cout << "Number is prime." << endl;
	else
		cout << "Number is not prime." << endl;

	return 0;
}