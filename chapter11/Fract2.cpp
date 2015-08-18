
//test lcm

#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

class Fraction{
private:
	int num, den;			//Numerator and denominator.
public:
	void set(int n, int d)
		{num = n; den = d; normalize();}
	int get_num() {return num;}
	int get_den() {return den;}
private:
	void normalize();			//convert to standard form
	int gcf(int a, int b);		//greatest common factor
	int lcm(int a, int b);		//lowest common multiple
};

int main(){
	int a, b;
	string str;
	Fraction fract;
	while(true){
		cout << "Enter numerator: ";
		cin >> a;
		cout << "Enter denominator: ";
		cin >> b;
		fract.set(a, b);
		cout << "Numerator is " << fract.get_num() << endl;
		cout << "Denominator is " << fract.get_den() << endl;
		cout << "Do again? (Y or N)";
		cin >> str;
		if (!(str[0] == 'Y' || str[0] == 'y'))
			break;
	}
	return 0;
}

//normalize:put fraction into standard form

void Fraction::normalize(){

	//Handle cases involving 0

	if (den == 0 || num == 0){
		num = 0;
		den = 1;
	}

	//Put neg.sign in numerator only
	if (den < 0){
		num *= -1;
		den *= -1;
	}

	//Factor out GCF from numerator and denominator
	int n = gcf(num, den);
	num = num / n;
	den = den / n;
}

//Greatest common factor

int Fraction::gcf(int a, int b){
	if (b == 0)
		return abs(a);
	else
		return gcf(b, a%b);
}

//Lowest Common Multiple

int Fraction::lcm(int a, int b){
	int n = gcf(a, b);
	return a / n * b;
}