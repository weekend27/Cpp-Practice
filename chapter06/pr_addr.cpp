
//print address

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int a = 1, b = 2, c = 3;
	int *pa = &a;
	int *pb = &b;
	int *pc = &c;
	cout << "Value of pointer pa is: " << pa << endl;
	cout << "Value of pointer pb is: " << pb << endl;
	cout << "Value of pointer pc is: " << pc << endl;
	cout << "The values of a, b and c are: ";
	cout << a << ", " << b << ", " << c << endl;

	return 0;
}