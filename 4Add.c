#include<stdio.h>
int main()
{
    int No1 = 0, No2 = 0, Add = 0;

    printf("Enter first number : ");
    scanf("%d", &No1);

    printf("Enter second number : ");
    scanf("%d", &No2);

    Add = No1 + No2;

    printf("Addition of given numbers is : %d\n", Add);

    return 0;
}