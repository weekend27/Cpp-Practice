
//build a bigger string with several small strings.

#include <iostream>
#include <cstring>

using namespace std;

int main(){
	char str[600];
	char name[100];
	char addr[200];
	char work[200];

	//Get three strings from the user.

	cout << "Enter name and press ENTER: ";
	cin.getline(name, 100);
	cout << "Enter address and press ENTER: ";
	cin.getline(addr, 200);
	cout << "Enter workplace and press ENTER: ";
	cin.getline(work, 200);

	//Build the output string, and then print it.
	strcpy(str, "\nMy name is ");
	strcat(str, name);
	strcat(str, ", I live at ");
	strcat(str, addr);
	strcat(str, ",\nand I work at ");
	strcat(str, work);
	strcat(str, ".");

	cout << str << endl;

	return 0;
}