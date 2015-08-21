###<center>Chapter06 Summary</center>

Here are the main points of Chapter 6:

1.A pointer is a variable that can contain a numeric memory address. You can
declare a pointer by using the following syntax:

        type * p;

2.You can initialize a pointer by using the address operator (&):

        p = &n;     // Assign address of n to p.
        
3.Once a pointer is initialized, you can use the indirection operator (*) to manipu-
late data pointed to by the pointer.

        p = &n;
        *p = 5;     // Assign 5 to n.
        
4.To enable a function to manipulate data (pass by reference), pass an address.

        double_it(&n);
        
5.To receive an address, declare an argument having pointer type.

        void double_it(int *p);
        
6.An array name is a constant that translates into the address of its first element. A
reference to an array element a[n] is translated into the pointer reference, *(a +
n).

7.When an integer value is added to an address expression, C++ performs scaling,
multiplying the integer by the size of the expression’s base type.

        new_address = address_expression + ( integer * size_of_base_type )

8.The unary operators * and ++ operators associate right-to-left. Consequently,
this expression:

        *p++ = 0;
        
does the same thing as the following expression, which sets *p to 0 and then
increments the pointer p to point to the next element:

        *(p++) = 0;













