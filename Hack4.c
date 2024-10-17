/*
Task

Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.
*/


#include <stdio.h>
int max_of_four(int iNo1, int iNo2, int iNo3, int iNo4)
{
    int iMax1,iMax2;
    iMax1=iNo1>iNo2 ? iNo1: iNo2;
    iMax2=iNo3>iNo4 ? iNo3: iNo4;

    return  iMax1>iMax2 ? iMax1: iMax2;
}

int main() 
{
    int iNo1 = 0,iNo2 = 0,iNo3 = 0,iNo4 = 0;
    scanf("%d %d %d %d", &iNo1, &iNo2, &iNo3, &iNo4);
    
    int iAns = max_of_four(iNo1,iNo2,iNo3,iNo4);
    
    printf("%d", iAns);
    
    return 0;
}