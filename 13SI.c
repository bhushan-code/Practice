#include<stdio.h>
int main()
{
    float P = 0, R = 0, T = 0, SI = 0;

    printf("Enter Principle amount :");
    scanf("%f", &P);
    
    printf("Enter ROI :");
    scanf("%f", &R);

    printf("Enter Time in years :");
    scanf("%f", &T);
 
    
    SI = (P*R*T)/100;

    printf("Simple interest is : %f\n", SI);
    
    return 0;

}