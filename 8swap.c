#include<stdio.h>
int main()
{
    int no1 = 0, no2 = 0, no3 = 0;


    printf("Enter first number : ");
    scanf("%d",&no1);

    printf("Enter second number : ");
    scanf("%d",&no2);

    printf("You Entered : %d, %d\n", no1, no2);

    no3 = no1 + no2;
    no2 = no3 - no2;
    no1 = no3 - no1;

    printf("Swap numbers : %d, %d\n", no1, no2);

    return 0;
}