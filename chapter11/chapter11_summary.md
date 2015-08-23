###<center>Chapter11 Summary</center>

Here are the main points of Chapter 11:

1.A class declaration has this form:

        class class_name {
            declarations
        };
        
2.In C++, the struct keyword is equivalent to the class keyword, except that in
classes declared with struct, members are public by default.

3.Because members of a class declared with the class keyword are private by
default, you need to declare at least one member public.

        class Fraction {
        private:
            int num, den;
        public:
            void set(n, d);
            int get_num();
            int get_den();
        private:
            void normalize();
            int gcf();
            int lcm();
        };
        
4.Once a class is declared, you can use it as a type name, just as you would int,
float, double, and so on. For example, you can declare a series of objects:

        Fraction a, b, c, my_fraction, fract1;

5.Functions of a class can refer to other members within that same class (whether
private or not) without use of the scope operator (::).

6.To place a member-function definition outside its class’s declaration, use this
syntax:

        type class_name::function_name ( argument_list )
            statements
        }


7.If you place a member-function definition inside the class declaration, the func-
tion is inline. When the function is called, machine instructions that implement
the function are placed into the body of the program.

8.When you inline a function, no semicolon is needed after the closing brace:

        void set(n, d) {num = n; den = d;}

9.The class declaration must precede all uses of the class. The function definitions
can be placed anywhere in the program (or even in a separate module), but they
must follow the class declaration.

10.If a function has a class for its return type, it must return an object of that type.
One way to do this is to first declare such an object as a local variable.












