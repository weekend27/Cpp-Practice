
//print_me

#include <iostream>

using namespace std;

class Printable {
	virtual void print_me(ostream &os) = 0;

	friend ostream &operator<<(ostream &os, Printable &pr);
};

ostream &operator<<(ostream &os, Printable &pr){
	pr.print_me(os);
	return os;
};

class P_int : public Printable{
public:
	int n;

	P_int() {};
	P_int(int new_n) {n = new_n; };
	void print_me(ostream &os);		//override
};

class P_dbl : public Printable{
public:
	double val;

	P_dbl() {};
	P_dbl(double new_val) {val = new_val;};
	void print_me(ostream &os);		//override
};

//implementations of print_me

void P_int::print_me(ostream &os){
	os << n;
}

void P_dbl::print_me(ostream &os){
	os << " " << val;
}

int main(){
	Printable *p;
	P_int num1(5);
	P_dbl num2(3.1415);

	p = &num1;
	cout << "Here is the number: " << *p << endl;
	p = &num2;
	cout << "Here is another one: " << *p << endl;

	return 0;
}

/*
Here is the number: 5
Here is another one:  3.1415
*/