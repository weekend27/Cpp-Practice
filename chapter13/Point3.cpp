
//constructor

#include <iostream>
using namespace std;

class Point
{
private:
	int x, y;
public:
	//constructor
	Point() {set(0, 0);}
	Point(int new_x, int new_y) {set(new_x, new_y);}
	Point(const Point &src) {set(src.x, src.y);}

	//Operations
	Point add(const Point &pt);
	Point sub(const Point &pt);
	Point operator+(const Point &pt) {return add(pt);}
	Point operator-(const Point &pt) {return sub(pt);}

	//other member functions
	void set(int new_x, int new_y);
	int get_x() const {return x;}
	int get_y() const {return y;}
};

int main(){
	Point p1(20, 20);
	Point p2(0, 5);
	Point p3(-10, 25);
	Point p4 = p1 + p2 - p3;

	cout << "The point is " << p4.get_x();
	cout << ", " << p4.get_y() << "." << endl;

	return 0;
}

void Point::set(int new_x, int new_y){
	if (new_x < 0)
		new_x *= -1;
	if (new_y < 0)
		new_y *= -1;
	x = new_x;
	y = new_y;
}

Point Point::add(const Point &pt){
	Point new_pt;
	new_pt.x = x + pt.x;
	new_pt.y = y + pt.y;
	return new_pt;
}

Point Point::sub(const Point &pt){
	Point new_pt;
	new_pt.x = x - pt.x;
	new_pt.y = y - pt.y;
	return new_pt;
}