###<center>Chapter18 Summary</center>

Here are the main points of Chapter 18:

1.Polymorphism means that the knowledge of how to perform a service is built
into the object itself, not the client (that is, the software that uses it). Conse-
quently, the resolution of a single function call or operation can take unlimited
different forms.

2.Polymorphism is made possible by virtual functions.

3.The address of a virtual function is not resolved until runtime. (This is also
called late binding.) The class of an object—as known at runtime—determines
which implementation of a virtual function gets executed.

4.To make a function virtual, precede its declaration in the class with the virtual
keyword. For example:

        protected:
            virtual void normalize();

5.Once a function is declared virtual, it is virtual in all subclasses. You don’t need
to use the virtual keyword more than once per function.

6.You cannot make a constructor or an inline function virtual.

7.However, a destructor can be virtual.

8.There is a small performance penalty and a small space penalty whenever a func-
tion is made virtual. However, these losses of efficiency are minor in terms of
today’s powerful computers.

9.As a general rule, any member function that might be overridden should be
declared virtual.

10.A pure virtual function has no implementation (that is, no function definition)
in the class in which it is declared. You declare a pure virtual function by using
=0 notation. For example:

        virtual void print_me() = 0;

11.A class with at least one pure virtual function is an abstract class. Such a class
cannot be used to instantiate objects.

Number a, b, c;     // ERROR!

12.Abstract classes are useful as a means to create a general interface—a list of ser-
vices that a subclass provides by implementing all the virtual functions.

13.In the final analysis, polymorphism is a way of liberating objects from slavish
dependence on each other—because the knowledge of how to perform a service
is built into each individual object. It’s ultimately this feature that gives object
orientation its special flavor and makes it object oriented, not merely class
oriented.






