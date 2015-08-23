###<center>Chapter14 Summary</center>

Here are the main points of Chapter 14:

1.Use the new keyword to create one more data item dynamically (that is, on the
fly). Such an expression returns a pointer to the requested type. Use delete to
release memory allocated earlier by new.

        type *pointer = new type [ size ];
        
2.A class destructor is called just before an object is destroyed. Writing a destructor
is useful when an object owns memory or some other resource that needs to be
released. A destructor has this declaration:

        ~ class_name ()

3.A destructor is called when an object is explicitly destroyed by use of the delete
operator or when the object goes out of scope.

4.A shallow copy is a simple member-to-member copy between one object and
another. For simple classes, this is often enough.

5.A deep copy reconstructs the contents of one object and replicates them in
another. This kind of copying—which requires the author of a class to write a
copy constructor and an assignment-operator function—is often necessary for
classes that manipulate system resources, such as memory or file access.

6.The this keyword is translated into a pointer to the current object (that is, the
object through which a member function is called).

7.All versions of the assignment-operator function should end by returning a ref-
erence to the current object.

        return *this;

8.Member functions that return an existing object should have a reference return
type (such as String&). This includes all assignment operator functions.

        String& String::operator=(const String &src) {
            cpy(src.ptr);
            return *this;
        }

9.Member functions, such as operator+ , that return an object with new settings
should not have a reference return type. For example:

        String String::operator+(char *s) {
            String new_str(ptr);
            new_str.cat(s);
            return new_str;
        }












