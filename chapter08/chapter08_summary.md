###<center>Chapter08 Summary</center>

Here are the main points of Chapter 8:

1.To switch on file-stream support from the C++ standard library, use this #include statement, which brings in prototypes and declarations as needed.

        #include <fstream>
        
2.File-stream objects provide a way to communicate with files. To create a file-out-
put stream, use an ofstream type declaration. For example:

        ofstream fout(filename);
        
3.You can then write to the stream as you’d write to cout:

        fout << "Hello, human." << endl;
        
4.To create a file-input stream, use an ifstream declaration. A file-input stream
supports the same operations that cin does, including the getline function.

        ifstream fin(filename);
        char input_string[MAX_PATH + 1];
        fin.getline(input_string, MAX_PATH);
        
5.If the file can’t be opened, the file-stream object gets set to a null (zero). You can
test the object in a condition; if the value is zero, there was an error, and the pro-
gram should react as appropriate.

        if (! file_in) {
            cout << "File " << filename;
            cout << " could not be opened.";
            return -1;
        }
        
6.After you’re done working with a file-stream operator (regardless of mode), it is
good programming practice to close it. This frees up the file so that it can be
accessed by other programs.

        fout.close();

7.Files can be opened in either text mode or binary mode. In text mode, you read
and write to a file just as you would the console. In binary mode, you use mem-
ber functions to read and write data directly. To open a file stream in binary, ran-
dom-access mode, use the flags ios::out and ios::binary or ios::in and
ios::binary.

8.Random-access mode enables you to go directly to any position in the file. You
can read any portion of the file and overwrite any existing portions without
affecting the rest. If the file pointer is moved beyond the file’s current length, the file is automatically extended as needed.

9.Use the seekp member function to move the file pointer. The function takes an
argument giving an offset (in bytes) from the beginning of the file.

        fbin.seekp(offset);
        
10.The read and write functions each take two arguments: a data address and the
number of bytes to copy.

        fstream. read (addr, number_of_bytes);
        fstream. write (addr, number_of_bytes);
        
11.Because the type of the address argument is char*, you need to apply a cast if it is
not a string. Use the sizeof operator to determine the number of bytes to read or
write.

        binfil.write((char*)(&n), sizeof(n));
        binfil.write((char*)(&x), sizeof(x));
        binfil.write(str, sizeof(str));








