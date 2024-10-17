/*

Task

This challenge requires you to print  on a single line,
and then print the provided input string.

*/



#include<stdio.h>

int main()
{
    char s[100];
    scanf("%[^\n]",s);              // for full sentence sytax

    printf("Hello, World!\n");
    printf("%s\n",s);

    return 0;
}

//learned String here;