
//change Celsius temperature to Fahrenheit temperature
//without a variable named ftemp and output the result directly

#include <iostream>
using namespace std;

int main(){
	double ctemp;		//Celsius temperature 
	// double ftemp;		//Fahrenheit temperature
	//Get value of ctemp

	cout << "Input a Celsius temp and press ENTER: ";
	cin >> ctemp;

	//Calculate the result and output

	//ftemp = (ctemp * 1.8) + 32;
	
	cout << "Fahrenheit temp is: " << (ctemp * 1.8) + 32 << endl;
	return 0;
}