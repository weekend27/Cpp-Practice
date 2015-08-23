###<center>Chapter15 Summary</center>

Here are the main points of Chapter 15:

1.Some C++ code deals heavily with pointers to objects. With such pointers, it’s
convenient to use the indirection operator -> to access a member of the object
pointed to. For example:

        // Get the num member of object pointed to.
        int n = pFraction->num;
        
        // Call the set function for object pointed to.
        pFraction->set(0, 1);

2.The use of dynamic memory allocation, along with pointers, to objects makes it
possible to create complex structures in memory such as lists and trees. These
can be as simple or complex as you choose. (Note, however, that the STL list class
introduced in the next chapter provides a simpler way to support a standard list
container.)

3.Use the new keyword to dynamically allocate an object at runtime. (This key-
word was first introduced in Chapter 14.)

        Node *pNode = new Node;

4.When you create your own lists and trees in memory, it becomes important to
prevent memory leaks by deleting each individual object as soon as you know
you no longer need it. Programs that fail to deal with memory leaks can cause
your computer to prematurely run low on memory and need to be rebooted.

5.Use the delete keyword to release objects and free up memory.

delete p;       // p points to an object
delete[] p;     // p points to an array of objects.

6.Recursion is sometimes the only practical way to solve a problem, as in the
Tower of Hanoi. But otherwise, if there is both an iterative (loop-based) and
recursive solution, the iterative version is almost always more efficient.











