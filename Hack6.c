#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d\n%d", &a, &b);

    int iCnt = 0;

    for(iCnt=a; iCnt<=b; iCnt++)
    {
        switch(iCnt)
        {
            case 1:
                printf("one\n");
                break;
            case 2:
                printf("two\n");
                break;
            case 3:
                printf("three\n");
                break;
            case 4:
                printf("four\n");
                break;
            case 5:
                printf("five\n");
                break;
            case 6:
                printf("six\n");
                break;
            case 7:
                printf("seven\n");
                break;
            case 8:
                printf("eight\n");
                break;
            case 9:
                printf("nine\n");
                break;
            default :
                if(iCnt%2==1)
                {
                    printf("odd\n");
                }
                else
                {
                    printf("even\n");
                }
        }

    }


    return 0;
    
}