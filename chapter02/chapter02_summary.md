###<center>Chapter02 Summary</center>

Here are the main points of Chapter 2:

1.You can declare integer variables by using the data type’s name followed by a
variable name and semicolon. You can also declare multiple variables, separating
adjacent variable names with a comma.

        int variable;
        int variable1, variable2, ...;
        
2.Constants have int or double type as appropriate. Any value with a decimal
point is automatically considered a floating-point value: 3 is stored as an int, but
3.0 is stored as a double.

3.The if statement has an optional else clause, so you can use this form:

        if (condition)
            statement
        else
            statement
            
4.Don’t confuse assignment (=) with test-for-equality (==). Here’s a correct use of
the two operators:

        if (x == y)
            is_equal = true;
            
5.The while keyword executes a statement as long as the condition is true:

        while ( condition )
            statement
            
6.The increment operator is convenient shorthand for adding 1 to a number. This
creates an expression with a side effect.

        cout << n++;    // Print n and then add 1 to n.
        
7.You can use the C++ logical (Boolean) operators “and” (&&), “or” (||), and “not”
(!) to create complex conditions. The “and” and “or” operators use short-circuit
logic.

8.The easiest way to get out of a loop is often to use the break keyword:

        break;














