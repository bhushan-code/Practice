#include<stdio.h>
int main()
{
    int no = 0;
    float f = 0.0;
    char c = '\0';
    double d = 0.0;

    printf("Size of Integer is : %lu\n", sizeof(no));
    printf("Size of float is : %lu\n", sizeof(f));
    printf("Size of Character is : %lu\n", sizeof(c));
    printf("Size of Double is : %lu\n", sizeof(d));
    
    return 0;

}