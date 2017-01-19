--- Create a basic Makefile ---
In this folder there is no main.c file so coppy the main.c from labb2.
The make file need to be named
'''
Makefile
'''

In that file putt.
'''
all:
    gcc main.c -lm -o prog
'''
Then in the terminal run the command

'''
make all
'''
Change the makefile to include the following command.
'''
run: all
    ./prog
'''
--- Variables in Makefiles ---
In the beginning of the file you can write variables in in the make file.
'''
CC=gcc
CFLAGS=-g -Wall
EXE_File=prog

all:
    $(CC) $(CFLAGs) main.c -o $(EXE_FILE) -lm

run: all
    ./$(EXE_FILE)

'''


