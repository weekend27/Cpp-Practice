
// add mult

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
	Fraction add (Fraction other);
	Fraction mult (Fraction other);

private:
	void normalize();			//convert to standard form
	int gcf(int a, int b);		//greatest common factor
	int lcm(int a, int b);		//lowest common multiple
};

int main(){
	Fraction fract1, fract2, fract3;
	fract1.set(1, 5);
	fract2.set(4, 3);
	fract3 = fract1.add(fract2);
	cout << "1/5 plus 4/3 = ";
	cout << fract3.get_num() << "/" << fract3.get_den() << endl;

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

Fraction Fraction::add(Fraction other){
	Fraction fract;
	int lcd = lcm(den, other.den);
	int quot1 = lcd/den;
	int quot2 = lcd/other.den;
	fract.set(num * quot1 + other.num * quot2, lcd);
	return fract;
}

Fraction Fraction::mult(Fraction other){
	Fraction fract;
	fract.set(num * other.num, den * other.den);
	return fract;
}