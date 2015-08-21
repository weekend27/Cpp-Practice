###<center>Chapter10 Summary</center>

Here are the main points of Chapter 10:

1.C++0x adds support for the long long int, a 64-bit integer. There is also a corre-
sponding unsigned long long int type. In declaring variables of either type, the
int keyword is optional.

        long long x = 0;
        unsigned long long y = 0;

2.For numeric literals outside the range of long integers, C++0x provides new
numeric literal prefixes: LL for long long and ULL for unsigned long long.

        long long x = 1230004560012LL;
        
3.The atoll function takes string input and returns a long long (64-bit) integer.

4.This for syntax is simplest if you don’t need to alter contents of the container
during the loop.

        for(int n : my_array)   // Print each member of my_array
            cout << n << endl;

5.Use an ampersand (&) in the variable declaration if you want to enable change
of values.

        for(int& n : my_array)      // Set each member of my_array to 0
            n = 0;

6.The auto keyword declares a data item in which the type is determined by con-
text. (But once declared, the type is fixed.) For example:

        int my_int_array[NUM_ITEMS];
        
        for (auto x : my_int_array)     // x has int type
            cout << x << endl;

7.The decltype keyword returns the type of its argument.

8.Use the nullptr keyword to initialize a pointer that “points nowhere.”

        int *p = nullptr;

9.C++0x supports both weak and strong enum (enumerated types). Use of enum
class (see the following example) creates a strongly typed set of enumerated val-
ues in which a separate namespace is created and values cannot be assigned to or
from another integer type without a cast.

        enum class type_name { symbols };

10.When using this version (strongly typed), remember the symbols listed are in a
separate namespace and have to be referred to with class scope, unless you have a
using namespace statement. For example:

        enum class Choice { rock, paper, scissors };
        Choice player = Choice::rock;
        using namespace Choice;
        Choice comp = scissors;     // Now this is ok.

11.The R prefix is used in C++0x complaint compilers to permit raw string literals
in which no character needs to be escaped, not even quote marks (") and back-
slashes (\). The sequences "( and )" delimit the string. Here is the general
syntax:

        R"( raw-string-text )"





        