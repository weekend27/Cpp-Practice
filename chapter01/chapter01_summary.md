###Chapter01 Summary

Here are the main points of Chapter 1:

1.Creating a program begins with writing C++ source code. This consists of C++
statements, which bear some resemblance to English. (Machine code, by con-
trast, is completely incomprehensible unless you look up the meaning of each
combination of 1s and 0s.) Before the program can be run, it must be translated
into machine code, which is all the computer really understands.

2.The process of translating C++ statements into machine code is called compiling.

3.After compiling, the program also has to be linked to standard functions stored
in the C++ library. This process is called linking. After this step is successfully
completed, you have an executable program.

4.Simple C++ programs have the following general form:

        #include "iostream"
        
        using namespace std;
        
        int main() {
        
        Enter_your_statements_here!
        
        return 0;
        
        }
    
5.Almost every C++ statement is terminated by a semicolon (;).

6.Double slashes (//) indicate a comment; all text to the end of the line is ignored
by the compiler itself. But comments can be read by humans who have to main-
tain the program.

7.To get keyboard input into a variable, you can use the cin object. For example:

        cin >> x;
















