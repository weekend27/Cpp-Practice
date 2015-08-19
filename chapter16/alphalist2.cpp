
//template

#include <iostream>
#include <list>
#include <string>

using namespace std;

int main(int argc, char *argv[]){
	string s;
	list<string> LS;
	list<string>::iterator iter;

	while(true){
		cout << "Enter string (ENTER to exit): ";
		getline(cin, s);
		if (s.size() == 0)
			break;
		LS.push_back(s);
	}
	LS.sort();
	//print elements
	cout << endl;
	for (iter = LS.begin(); iter != LS.end(); iter++)
		cout << *iter << endl;

	return 0;
}

/*
Enter string (ENTER to exit): hello
Enter string (ENTER to exit): heihei 
Enter string (ENTER to exit): 15suo
Enter string (ENTER to exit): Tsinghua
Enter string (ENTER to exit): University
Enter string (ENTER to exit): halo
Enter string (ENTER to exit): ok
Enter string (ENTER to exit): 
15suo
Tsinghua
University
halo
heihei
hello
ok
*/
