# More files to make #
With more files comes more headache.
To compile more files with a Makefile you need to understand that the compiler
is going to do the job in two parts.
1. The compiler creates object files like main.o or tree.o...
2. Then the compiler takes those .o files and combine them in to the program.

So in this lab you can find 3 files.
```
main.c
mystruct.h
mystruct.c
```
You need to write a Makefile that compiles each file to a .o file then link
them to a program.

The compiler needs a new parameter to just compile it to a object file (.o).
Try: `gcc -g -Wall -c mystruct.c`
That will produce a file named `mystruct.o` and that file needs to be included
in the program at the next step of compiling.
```
gcc -g -Wall mystruct.o main.c -o prog
```
That will then produce a linked program ready to use. 
# Automate it# 
That process quickly gets boring. We really need to automate it.
To do that we create dependency in our Makefile.
```
mystruct:
    gcc $(CFLAGS) $(LFLAGS) mystruct.c

all: mystruct
    gcc $(CFLAGS) $(LFLAGS) mystruct.o main.c -o prog
```
If you now compile with `make mystruct` it will only compile the mystruct.c part
of our program. But if you compile with `make all` then it while first build
mystruct.o then compile main.c. BUT With a big B the compiler is lazy and if
you have a mystruct.o already the compiler wont recompile that one. To fix
this problem  add 2 lines at the bottom.
```
.PHONY: clean
clean:
    rm -f *.o prog
```
Then insert `clean` in before `mystruct` on the `all` row so that locks like
this:
```
all: clean mystruct
```
By doing this the Makefile always removes the .o files.

