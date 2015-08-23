###<center>Chapter13 Summary</center>

Here are the main points of Chapter 13:

1.An operator function for a class has the following declaration, in which @ stands
for any valid C++ operator.

        return_type operator@( argument_list )

2.An operator function may be declared as a member function or a global func-
tion. If it is a member function, then (for a binary operator) there is one argu-
ment. For example, the operator+ argument for the Point class could have this
declaration and definition:

        class Point {
        //...
        public:
            Point operator+(Point pt);
        };
        
        Point Point::operator+(Point pt) {
            Point new_pt;
            new_pt.x = x + pt.x;
            new_pt.y = y + pt.y;
            return new_pt;
        }

3.Given this code, the compiler now knows how to interpret the addition sign
when applied to two objects of the class.

        point1 + point2

4.When an operator function is used this way, the left operand becomes the object
through which the function is called, and the right operand is passed as an argu-
ment. Thus, in the operator+ definition shown earlier, unqualified references to
x and y refer to the values of the left operand.

5.Operator functions can also be declared as global functions. For a binary opera-
tor, the function has two arguments. For example:

        Point operator+(Point pt1, Point pt2) {
            Point new_pt;
            new_pt.x = pt1.x + pt2.x;
            new_pt.y = pt1.y + pt2.y;
            return new_pt;
        }

6.One drawback of writing the operator function this way is that it loses access to
private members. To overcome this limitation, declare the global function as a
friend of the class. For example:

        class Point {
        //...
        public:
            friend Point operator+(Point pt1, Point pt2);
        };

7.If an argument takes an object but does not need to alter it, you can often
improve the efficiency of a function by revising it to use a reference argument—
for example, changing an argument of type “Point” to type “const Point&.”

8.A constructor with one argument provides a conversion function. For example,
the following constructor enables automatic conversion of integer data into
Fraction-class format:

        Fraction(int n) {set(n, 1);};

9.If you don’t write an assignment operator function (=), the compiler automati-
cally supplies one for you. The behavior of the compiler-supplied version is to
perform a simple member-by-member copy.

10.The compiler does not supply a test-for-equality function (==), so you need to
write your own if you want to be able to compare objects. It’s a good idea to use
the bool return type, if your compiler supports it; otherwise, use int return type
for this function.

11.To write a “print” function for a class, write a global operator<< function: The
first argument should have ostream type, so that the stream operator (<<) is
supported for cout and other output-stream classes. You should first declare this
function as a friend to your class. For example:

        class Point {
        //...
        public:
            friend ostream &operator<<(ostream &os, Fraction &fr);
        };

12.In the function definition, the statements should write data from the right
operand (fr in this case) to the ostream argument. Then the function should
return the ostream argument itself. For example:

        ostream &operator<<(ostream &os, Fraction &fr) {
            os << fr.num << "/" << fr.den;
            return os;
        }

13.C++0x supports the creation of user-defined literals by writing a function called
operator suffix. The raw-string version uses this syntax:

        Fraction operator "r" (const char *str) {
        ...
        }







