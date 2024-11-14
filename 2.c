//return largest number of array

#include<stdio.h>
#include<stdlib.h>


int Smallest(int Arr[], int iLength)
{
    int iSmallest = Arr[0], iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iSmallest < Arr[iCnt])
        {
            iSmallest = Arr[iCnt];
        }
    }
    return iSmallest;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application which accept N numbers and return differnce between sum of even and sum of odd elements.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


int main()
{
    int iSize = 0, iRet = 0,iCnt = 0, iValue = 0;
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

    iRet = Smallest(ptr, iSize);

    printf("Smallest number is : %d \n",iRet);

    free(ptr);

    return 0;
}