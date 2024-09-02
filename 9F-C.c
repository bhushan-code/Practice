#include<stdio.h>
int main()
{
    int F = 0, C = 0;


    printf("Enter Temperature in Fahrenheit : ");
    scanf("%d",& F);

    C = (F - 32) * 5 / 9;

    printf("Temperature in Celsius : %d\n", C);

    return 0;
}