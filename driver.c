#include <stdio.h>
#include <stdlib.h>
#include "lib.h" // this is our library

//? use enum and argv to choose the function we need to test

int main(int argc, char *argv[])
{   
    puts("Hello!, this is the driver of the library.");

    printTestInfo("myEcho");
    puts("please enter some words (press Ctrl + D to end the program):");
    myEcho();

    return EXIT_SUCCESS;
}