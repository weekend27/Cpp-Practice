
//constructor

#include <iostream>

using namespace std;

class Fraction{

private:
	int num, den;			//Numerator and denominator.

public:
	Fraction() {set(0, 1);}
	Fraction(int n, int d) {set(n, d);}
	Fraction(int n) {set(n, 1);}
	Fraction(Fraction const &src);

	void set(int n, int d)
		{num = n; den = d; normalize();}
	int get_num() const {return num;}
	int get_den() const {return den;}
	Fraction add (const Fraction &other);
	Fraction mult (const Fraction &other);
	Fraction operator+(const Fraction &other) {return add(other);}
	Fraction operator*(const Fraction &other) {return mult(other);}
	bool operator==(const Fraction &other);

	friend ostream &operator<<(ostream &os, Fraction &fr);

private:
	void normalize();			//convert to standard form
	int gcf(int a, int b);		//greatest common factor
	int lcm(int a, int b);		//lowest common multiple
};

int main(){
	// Fraction f1(1, 2);
	// Fraction f2(1, 3);

	// Fraction f3 = f1 + f2;
	// Fraction f4 = f1 * f2;

	// cout << "1/2 + 1/3 = ";
	// cout << f3.get_num() << "/";
	// cout << f3.get_den() << endl;

	// cout << "1/2 * 1/3 = ";
	// cout << f4.get_num() << "/";
	// cout << f4.get_den() << endl;

	Fraction f1(1, 2);
	Fraction f2(1, 3);

	Fraction f3 = f1 + f2 + 1;

	cout << "1/2 + 1/3 + 1 = " << f3 << endl;

	return 0;
}

//FRACTION CLASS FUNCTIONS
Fraction::Fraction(Fraction const &src){
	cout << "Now calling copy constructor." << endl;
	num = src.num;
	den = src.den;
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

Fraction Fraction::add(const Fraction &other){
	Fraction fract;
	int lcd = lcm(den, other.den);
	int quot1 = lcd/den;
	int quot2 = lcd/other.den;
	fract.set(num * quot1 + other.num * quot2, lcd);
	return fract;
}

Fraction Fraction::mult(const Fraction &other){
	Fraction fract;
	fract.set(num * other.num, den * other.den);
	return fract;
}

bool Fraction::operator==(const Fraction &other){
	return (num == other.num && den == other.den);
}

ostream &operator<<(ostream &os, Fraction &fr){
	os << fr.num << "/" << fr.den;
	return os;
}

/*
1/2 + 1/3 + 1 = 11/6
*/