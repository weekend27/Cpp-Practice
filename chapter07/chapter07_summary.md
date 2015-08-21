###<center>Chapter07 Summary</center>

Here are the main points of Chapter 7:

1.Text characters are stored in the computer according to their ASCII codes. For
examples, the string “Hello!” is represented by the byte values 72, 101, 108, 108,
111, 33, and 0 (for the terminating null).

2.The traditional “C-string” type uses a terminating null—a 0 byte value. This
enables string-handling functions to determine where the string ends. When
you declare a string literal such as “Hello!”, C++ automatically allocates space for
this terminating null along with the other characters.

3.The current length of a string (determined by searching for the terminating
null) is not the same as the amount of total storage reserved for the string. The
following declaration reserves 10 bytes of storage for str but initializes it so that
its current length is only six. The string will have three unused bytes as a result,
enabling it to grow later if needed.

        char str[10] = "Hello!";
        
4.Library functions such as strcpy (string copy) and strcat (string concatenation)
can alter the length of an existing string. When you perform these operations, it’s
important that the string have enough space reserved to accommodate the new
string length.

5.The strlen function gets the current length of the string.

6.If you try to increase the length of a string without having the necessary space
reserved, you’ll overwrite another variable’s data area, creating hard-to-find
bugs.

        char str[] = "Hello!";
        strcat(str, " So happy to see you.");       // ERROR!!!!
        
7.To ensure that you don’t copy too many characters to a string, you can use the
strncat and strncpy functions.

        char str[100];
        strncpy(str, s2, 99);
        strncat(str, s2, 99 – strlen(str));
        
8.The stream operator (>>), used with the cin object, provides only limited con-
trol over input. When you use it to send data to a string address, it gets the char-
acters only up to the first white space (blank, tab, or newline).

9.To get a full line of input, use the cin.getline function. The second argument
specifies the maximum number of characters to copy to the string (not counting
the terminating null).

        cin.getline(input_string, max);
        
10.An expression such as 'A' represents a single integer value (after translation into
ASCII code); an expression such as "A" represents an array of char and is there-
fore translated into an address.

11.The STL string class lets you to create, copy contents (=), test for equality of con-
tents (==), and concatenate (+) strings without having to worry about size
issues.









