
//read text from file

#include <iostream>
#include <fstream>

using namespace std;

#define COL_WIDTH 80

int main(){
	int MAX_PATH = 100;
	int c; 		//input character
	int i; 		//loop counter
	char filename[MAX_PATH + 1];
	char input_line[COL_WIDTH + 1];

	cout << "Enter a file name and press ENTER: ";
	cin.getline(filename, MAX_PATH + 1);

	ifstream file_in(filename);

	if (!file_in){
		cout << filename << "could not be opened.";
		cout << endl;
		//system("PAUSE");
		return -1;
	}

	while(true){
		for (i = 1; i <= 24 && !file_in.eof(); i++){
			file_in.getline(input_line, COL_WIDTH + 1);
			cout << input_line << endl;
		}
		if (file_in.eof())
			break;
		cout << "More? (Press 'Q' and ENTER to quit)";
		cin.getline(input_line, COL_WIDTH + 1);
		c = input_line[0];
		if (c == 'Q' || c == 'q')
			break;
	}

	//system("PAUSE");
	return 0;
}
