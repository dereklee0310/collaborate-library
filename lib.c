#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

void printTestInfo(const char *funcName)
{   
    putchar('\n');
    puts("------------------------------------------------");
    printf("now testing function %s()...\n" , funcName);
}

void myEcho()
{   
    char *buf;

    buf = (char *)malloc(sizeof(char) * BUF_SIZE);
    if(NULL == buf) {
        perror("fail to malloc memory in function myecho()");
        exit(EXIT_FAILURE);
    }

    while(fgets(buf, sizeof(buf), stdin))
        printf("%s", buf);
}