
//function
//calculate the average-number of two numbers

#include <iostream>
using namespace std;

//Functions must be declared before being used.

double avg(double x, double y);

int main(){
	double a = 0.0;
	double b = 0.0;

	cout << "Enter first number and press ENTER: ";
	cin >> a;
	cout << "Enter second number and press ENTER: ";
	cin >> b;

	//Call the function avg().
	cout << "Average is: " << avg(a, b) << endl;

	return 0;
}

//Average-number function definition

double avg(double x, double y){
	return (x + y) / 2;
}