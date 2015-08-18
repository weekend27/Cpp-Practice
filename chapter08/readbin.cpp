
//read binary data

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int get_int(int default_value);

int main(){
	int MAX_PATH = 100;
	char filename[MAX_PATH + 1];
	int n = 0;
	char name[20];
	int age = 0;
	int recsize = sizeof(name) + sizeof(int);

	cout << "Enter file name: ";
	cin.getline(filename, MAX_PATH + 1);

	//open file for binary read-write access.

	fstream fbin(filename, ios::binary | ios::in);
	if (!fbin){
		cout << filename << "coult not be opened." << endl;
		return -1;
	}

	//Get record number and go to record.
	cout << "Enter file record number: ";
	n = get_int(0);
	fbin.seekp(n * recsize);

	//Read data from the file.
	fbin.write(name, sizeof(name));
	fbin.write((char *)(&age), sizeof(int));

	//Display the data and close
	cout << "The name is: " << name << endl;
	cout << "The age is: " << age << endl;

	fbin.close();

	return 0;
}

#define COL_WIDTH 80		//80 is typical column width

//Get integer function
//Get an integer from keyboard; return default value
//if user enters 0-length string.

int get_int(int default_value){
	char s[COL_WIDTH + 1];
	cin.getline(s, COL_WIDTH + 1);
	if (strlen(s) == 0)
		return default_value;
	return atoi(s);
}