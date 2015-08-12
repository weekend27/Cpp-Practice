
//look for primes
//use for loop
//use prime() function

#include <iostream>
#include <cmath>
using namespace std;

bool prime(int n);

int main(){
	int i; //Number to test for prime-ness

	//Get a number from the keyboard and initialize i.

	while (true){
		cout << "Enter a number (0 = exit) and press ENTER: ";
		cin >> i;
		if (i == 0)
			break;
		if (prime(i))
			cout << i << " is prime." << endl;
		else
			cout << i << " is not prime." << endl;
	}

	return 0;
}

bool prime(int n){

	for (int i = 2; i <= sqrt(n); i++){
		if (n % i == 0)
			return false;
	}
	return true;
}