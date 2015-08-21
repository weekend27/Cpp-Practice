###<center>Chapter09 Summary</center>

Here are the main points of Chapter 9:

1.To access command-line arguments, declare main with two arguments of its
own, arc and argv:

        int main(int argc, char *argv[]) {
            // ...
        }
        
2.argc contains the number of command-line arguments entered by the user,
including the program name itself.

3.argv is an array of pointers to strings, in which each string contains a command-
line argument, starting with the program name. For example:

        cout << argv[0];        // Print program name.
        cout << argv[1];        // Print next item on cmd line.
        cout << argv[2];        // Print next item after that.

4.Function overloading lets you write multiple versions of the same function,
using the type of arguments to differentiate between them. 

5.Although by definition function overloading reuses a function name, it has the
effect of creating distinct functions. Each of these functions requires a separate
declaration and definition. Despite their sharing of a name—and the fact they
may do similar things—the functions are really separate from each other.

6.As long as you have more than one function or global data declaration, you can
subdivide your program into multiple source files. Each of these source files is a
module.

7.Among other advantages, the use of multiple modules enables you to have more
than one programmer at a time working on a large programming project.










