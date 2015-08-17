
//build a bigger string with several small strings.

#include <iostream>
#include <string>

using namespace std;

int main(){
	string str, name, addr, work;

	//Get three strings from the user.

	cout << "Enter name and press ENTER: ";
	getline(cin, name);
	cout << "Enter address and press ENTER: ";
	getline(cin, addr);
	cout << "Enter workplace and press ENTER: ";
	getline(cin, work);

	//Build the output string, and then print it.
	str = "\nMy name is " + name + ", I live at " + addr + ",\nand I work at " + work + ".";

	cout << str << endl;

	return 0;
}