# Compiling with systemlib #
In this folder their is a C program that requires a system library.
Print out the content of the file to the terminal by using the `cat` command.

The output on the terminal tells you that we have used a trig function in our
program. That function needs to be linked with the compiler. To get what
"flags" is needed we can ether try `google`or in this case its easy to just
```
man sin
```
A few linen below the on the man page it tells you to
```
Link with -lm
```
So the compiler needs the -lm parameter to work.
```
gcc -lm main.c -o prog
```

