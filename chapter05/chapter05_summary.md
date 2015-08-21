###<center>Chapter05 Summary</center>

Here are the main points of Chapter 5:

1.Use bracket notation to declare an array in C++. Declarations have this form:

        type array_name [ number_of_elements ] ;
        
2.You can use loops to efficiently process arrays of any size. For example, assume
an array was declared with SIZE_OF ARRAY elements. The following loop ini-
tializes every element to 0:

        for(i = 0; i < SIZE_OF_ARRAY; i++)
            my_array[i] = 0;
            
3.Use the char* notation to declare a string variable. For example:

        char *name = "Joe Bloe";
        
4.You can declare arrays of strings just as you can declare other kinds of arrays. For
example:

        char *band[4] = {"John", "Paul", "George", "Ringo"};
        
5.C++ does not check array bounds for you at runtime. Therefore, you need to
show care that you don’t write array-access code that overwrites other areas of
memory.

6.Two-dimensional arrays are declared this way:

        type array_name[size1][size2];