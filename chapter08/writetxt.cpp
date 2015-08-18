
//writh text to the file

#include <iostream>
#include <fstream>

using namespace std;

int main(){
	int MAX_PATH = 20;
	char filename[MAX_PATH];

	cout << "Enter a file name and press ENTER: ";
	cin.getline(filename, MAX_PATH);
	ofstream file_out(filename);
	if (! file_out){
		cout << filename << " could not be opened.";
		cout << endl;
		//system("PAUSE");
		return -1;
	}
	cout << filename << " was opened." << endl;
	file_out << "I read the" << endl;
	file_out << "news today," << endl;
	file_out << "ooh boy.";
	file_out.close();
	//system("PAUSE");
	return 0;
}