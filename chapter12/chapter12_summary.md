###<center>Chapter12 Summary</center>

Here are the main points of Chapter 12:

1.A constructor is an initialization function for a class. It has this form:

        class_name ( argument_list )

2.If a constructor is not inlined, the constructor’s function definition has this
form:

        class_name :: class_name ( argument_list ) {
            statements
        }
        
3.You can have any number of different constructors. They have the same function
name (which is the name of the class). But each constructor must be uniquely
identified by number or type of arguments.

4.The default constructor is the constructor with no arguments at all. It has this
declaration:

        class_name ()

5.The default constructor is called when an object is declared with no argument
list. For example:

        Point a;

6.If you declare no constructors, the compiler automatically supplies a default
constructor for you. This automatic constructor does nothing; it is a no-op.
However, if you write any constructors at all, the compiler does not supply a
default constructor for you.

7.So, to program defensively, you will usually want to write a default constructor.
It can include zero statements, if you want. For example:

        Point a() {};

8.In C++, a reference is a variable or argument declared with the ampersand (&).
The result is (almost always) that a pointer is passed under the covers, but no
pointer syntax is involved. The program appears to be passing a value, even
though it’s probably passing a pointer.

9.A class’s copy constructor is called whenever an object needs to be copied. This
includes situations in which an object is passed to a function or the function
returns an object as its return value.

10.The copy constructor uses a reference argument, as well as the const keyword,
which prevents changes to an argument. The copy constructor has this syntax:

        class_name ( class_name const & source )

11.If you don’t write a copy constructor, the compiler supplies one for you. It car-
ries out a simple member-by-member copy.













