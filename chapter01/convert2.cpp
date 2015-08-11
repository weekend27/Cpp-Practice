
//change Celsius temperature to Fahrenheit temperature
//with comments

#include <iostream>
using namespace std;

int main(){
	double ctemp;		//Celsius temperature 
	double ftemp;		//Fahrenheit temperature

	//Get value of ctemp

	cout << "Input a Celsius temp and press ENTER: ";
	cin >> ctemp;

	//Calculate ftemp and output

	ftemp = (ctemp * 1.8) + 32;
	cout << "Fahrenheit temp is: " << ftemp << endl;
	return 0;
}