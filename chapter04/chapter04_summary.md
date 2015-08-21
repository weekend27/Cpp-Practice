###<center>Chapter04 Summary</center>

Here are the main points of Chapter 4:

1.In C++, you can use functions to define a specific task, just as you might use a
subroutine or procedure in another language. C++ uses the name function for
all such routines, whether they return a value or not.

2.You also need to define the function somewhere in the program, to tell what the
function does. Function definitions use this syntax:

        type function_name (argument_list) {
            statements
        }
        
3.A function runs until it ends or until the return statement is executed. A return
statement that passes a value back to the caller has this form:

        return expression;
        
4.A return statement can also be used in a void function (function with no return
value) just to exit early, in which case it has a simpler form:

        return;
        
5.Global variables enable functions to share common data, but such sharing pro-
vides the possibility of one function interfering with another. It’s a good policy
not to make a variable global unless there’s a clear need to do so.

6.C++ functions can use recursion—meaning they call themselves. (A variation
on this is when two or more functions call each other.) This technique is valid as
long as there is a case that terminates the calls. For example:

        int factorial(int n) {
            if (n <= 1)
                return 1;
            else
                return n * factorial(n – 1);    // RECURSION!