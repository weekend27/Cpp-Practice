
//fibonacci
//long long number

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int long long Fibo(int n);
string output_formatted_string(long long num);

int main(){
	int n = 0;
	cout << "Enter a number here: ";
	cin >> n;
	string s = output_formatted_string(Fibo(n));
	cout << "Fibo(" << n << ") = " << s << endl;
	return 0;
}

long long Fibo(int n){
	if (n < 2)
		return 1;
	else
		return Fibo(n - 1) + Fibo(n - 2);
}

#define GROUP_SEP ','
#define GROUP_SIZE 3

string output_formatted_string(long long num){

	//Read data into string s.

	stringstream temp, out;
	temp << num;
	string s = temp.str();

	//Write first characters, in front of first separator (GROUP_SEP).

	int n = s.size() % GROUP_SIZE;
	int i = 0;
	if (n > 0 && s.size() > GROUP_SIZE){
		out << s.substr(i, n) << GROUP_SEP;
		i += n;
	}

	//Handle all the remaining groups.

	n = s.size() / GROUP_SIZE - 1;
	while (n-- > 0){
		out << s.substr(i, GROUP_SIZE) << GROUP_SEP;
		i += GROUP_SIZE;
	}

	out << s.substr(i);
	return out.str();
}
