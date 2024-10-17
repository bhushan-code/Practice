/*

Task

Tack two int and two float
print addition and difference of int and second line addition and difference of float rounded to one decimal point
*/



#include <stdio.h>

int main()
{
    int iNo1, iNo2;
    float fNo3, fNo4;
    
    
    scanf("%d",&iNo1);
    scanf("%d",&iNo2);
    scanf("%f",&fNo3);
    scanf("%f",&fNo4);
	
    printf("%d %d\n",iNo1 + iNo2,iNo1 - iNo2);
    printf("%0.1f %0.1f\n",fNo3 + fNo4,fNo3 - fNo4);
    
    return 0;
}
//60 -40
//6.9 -2.2



//learned how to restrict decimals place after point