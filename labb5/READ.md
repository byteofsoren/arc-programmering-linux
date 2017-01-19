--- A more generalized Makefile ---

In a earlier lab i showed you that a make file can contain variables.
What i did not mention is that Makefiles can create there own variables based
on input files. That leads to a make file that is very simple to maintain.
In the Makefile supplied with this lab you already have a very generalized
Makefile.
Copy the files from the last directory except the make file.
'''
cp ../labb4/*.{c,h} .
'''*/
Then open the Makefile and fill in the blank row.
'''
make all
./prog
'''
Ass a bonus i will give you a tip on a upcoming course in Data structures.
Run the program thru the memory analyzer valgrind.
'''
valgind ./prog
'''
Then edit the main.c file and change the #define freemem form 1 to 0.
Re compile and valgrind again.
You should see how much memory was lost when the program ended.
(Giving this output to the exterminator is like giving a correctly solved trig
integration to Lars-G L)
