
//print all elements in the hits array
//random number

#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

int rand_0toN1(int n);

int hits[10];

int main(){
	int n; 		//Number of trials; prompt from user
	int i;		//All-purpose loop variable
	int r;		//Holds a random value

	srand(time(NULL));		//set seed for random numbers

	cout << "Enter how many trials and press ENTER: ";
	cin >> n;

	for (i = 1; i <= n; i++){
		r = rand_0toN1(10);
		hits[r]++;
	}
	
	//print all elements in the hits array, along
	//with ratio of hits to EXPECTED hits (n/10.0)

	for (i = 0; i < 10; i++){
		cout << i << ": " << hits[i] << " Accuracy: ";
		double results = hits[i];
		cout << results / (n / 10.0) << endl;
	}

	return 0;
}

//Random 0-to-N1 Function.
//Generate a random integer from 0 to N-1.

int rand_0toN1(int n){
	return rand() % n;
}