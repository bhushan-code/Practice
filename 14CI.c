#include<stdio.h>
#include<math.h>

int main()
{
    float Pr = 0, R = 0, N = 0, T = 0, CI = 0;

    printf("Enter Principle amount :");
    scanf("%f", &Pr);
    
    printf("Enter ROI :");
    scanf("%f", &R);

    printf("Enter number of time compounds in time period :");
    scanf("%f", &N);
 
    printf("Enter Time in years :");
    scanf("%f", &T);
 
    CI = Pr * pow(1+(R/(100 * N)), (N*T));

    printf("Simple interest is : %f\n", CI);
    
    return 0;

}