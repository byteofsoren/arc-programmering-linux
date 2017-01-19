--- More files ---
With more files comes more headache.
To compile more files with a Makefile you need to understand that the compiler
is going to do the job in two parts.
1. The compiler creates object files like main.o or tree.o...
2. Then the compiler takes those .o files and combine them in to the program.

So in this lab you can find 3 files.
'''
main.c
mystruct.h
mystruct.c
'''
You need to write a Makefile that compiles each file to a .o file then link
them to a pragram.
