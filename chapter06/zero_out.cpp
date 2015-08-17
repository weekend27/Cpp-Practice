
//make all numbers to 0

#include <iostream>
using namespace std;

void zero_out_array(int *arr, int n);

int a[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};

int main(){
	int i;
	zero_out_array(a, 10);

	//print all elements of the array.
	for (i = 0; i < 10; i++)
		cout << a[i] << endl;

	return 0;
}

void zero_out_array(int *p, int n){
	while (n-- > 0){
		*p++ = 0;
	}
}