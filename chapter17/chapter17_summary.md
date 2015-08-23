###<center>Chapter17 Summary</center>

Here are the main points of Chapter 17:

1.To derive a class from (subclass) an existing class, use this syntax:

        class class_name : public base_class {
            declarations
        };
        
2.The public keyword in this context is not strictly required by the syntax, but it is
strongly recommended (particularly when you are first learning C++). If the
base-class has private access level (the default), all members in the base class
become private when they are inherited by the subclass.

3.All the members of a base class are inherited by the subclass—except for con-
structors.

4.However, in C++0x, you can cause a subclass to inherit the constructors of a
base class with this statement in the public section of the declarations:

        using baseclass :: baseclass ;

5.The declarations in the subclass may specify new members—which become
members of the class in addition to inherited members.

6.As always, the compiler supplies an automatic version of the default constructor,
copy constructor, and the operator= function, as described in previous chapters.
For subclasses, each of these compiler-supplied functions calls the base-class
version. (But note: As always, the compiler supplies the default constructor only
if you write no constructors at all.)

7.Private members of a base class are inherited by a subclass but are not accessible
in subclass code. To declare members that are accessible by code in any and all
subclasses—but not by code outside the class hierarchy—declare members as
protected. (These members are also accessible by code in indirect subclasses,
that is to say “descendent classes,” down through any number of generations.)

8.Classes (subclasses as well as ordinary classes) can contain objects as members—
which means that one class can contain another. However, a class cannot instan-
tiate an object of its own class, nor can two classes contain each other. (However,
as demonstrated in Chapter 15, a class can contain a pointer to an object of its
own class.)

9.The general rule is that a class must be fully declared before it is used to create
(instantiate) an object.

10.Another new feature of C++0x is that in writing a constructor, you can delegate
the work to another, existing constructor if appropriate. In the following exam-
ple, the second constructor in the second line delegates its job to the constructor
in the first line.

        Point(int new_x, int new_y) {x = new_x; y = new_y;}
        Point() : Point(0, 0) {}
        














