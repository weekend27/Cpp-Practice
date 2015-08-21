###<center>Chapter03 Summary</center>

Here are the main points of Chapter 3:

1.The purpose of a for statement is usually to repeat an action while counting to a
particular value. The statement has this following syntax:

        for ( initializer; condition; increment )
            statement
            
This is equivalent to the following while loop:
    
        initializer ;
        while ( condition ) {
            statement
            increment ;
        }
        
2.A for loop behaves exactly like its while-loop counterpart, with one exception: In
a for loop, the continue statement increments the loop variable before advanc-
ing to the top of the next loop cycle.

3.In the initializer expression, you can declare a variable “on the fly.” This declara-
tion gives the variable scope local to the for loop itself, meaning that changes to
the variable don’t affect variables of the same name outside the loop.

4.You can omit any and all of the three expressions inside the parentheses of the
for statement (initializer, condition, increment). If the condition is omitted, the
loop is executed unconditionally. (In other words, the loop is infinite.) Remem-
ber to use a break statement to get out of it.

        for (;;) {
            // Infinite loop!
        }