###<center>Chapter16 Summary</center>

Here are the main points of Chapter 16:

1.Once a list is created, you can add items to it—of the appropriate type—by using
push_back (push to back of list) and push_front (push to front of list).

        #include <list>
        using namespace std;
        ...
        list<int> Ilist;
        Ilist.push_back(11);
        Ilist.push_back(42);

2.You can access members of a list by creating an iterator, which is not a pointer
but uses several of the same operators. For example:

        list<int>::iterator iter;

3.You can loop through a list by calling the list’s begin and end functions. For
example, the following code prints each item in the list, one to a line.

        for (iter = Ilist.begin(); iter != Ilist.end(); i++)
            cout << *iter << endl;

4.As with the list class, you turn on support for last-in-first-out (LIFO) stack
classes with an #include statement.

        #include <stack>
        using namespace std;
        ...
        stack<string> my_stack;

5.To pop items off the top of the stack, use a “top and pop” technique.

        string s = my_stack.top();      // Get top item
        my_stack.pop();     // Remove top item

6.Popping an empty stack is a fatal error, so be sure to check stack size by calling
the size or empty function whenever you need to do so.










