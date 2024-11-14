//return largest number of array

#include<stdio.h>
#include<stdlib.h>


void Smallest(int Arr[], int iLength)
{
    int iNo = 0, iCnt = 0, iDigits = 0;
    for(iCnt= 0;iCnt<iLength; iCnt++)
    {
        iNo = Arr[iCnt];
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        
        iDigits = 0;

        while(iNo > 0)
        {
            iNo = iNo / 10;
            iDigits++;
        }
        if(iDigits == 3)
        {
            printf("%d\n",Arr[iCnt]);
        }
    }
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application which accept N numbers and return differnce between sum of even and sum of odd elements.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    int *ptr =NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);
  
    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements : \n",iSize);
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : \n",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    Smallest(ptr, iSize);

    free(ptr);

    return 0;
}