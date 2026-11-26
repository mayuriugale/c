#include<stdio.h>
#include<stdlib.h>

float Average( int Arr[],int iLength)     //fun
{
   
   int iCnt =0;
    int iSum = 0; 

   for(iCnt =0; iCnt < iLength; iCnt++)
   {
     iSum = iSum + Arr[iCnt];
   }
   
  return(iSum/iLength);
}

int main()
{ 
  int *ptr = NULL;
  int iSize =0, iCnt = 0;
  int iRet = 0;
  float fRet = 0.0f;

  printf("enter number of elements you want:\n");
  scanf("%d",iSize);

   //step1: allocate the memory
  ptr = (int *)malloc(sizeof(int)*iSize);

   //step 2:use the memory
   printf("enetr the elements:\n");
    
   for(iCnt = 0; iCnt < iSize; iCnt++);
   {
       scanf("%d",ptr[iCnt]);
   }
    iRet=Average(ptr, iSize);
    printf("Addition of all elements :%d\n");

    fRet = Average(ptr,iSize);
   //step 3: free the memory
   free(ptr);

    return EXIT_SUCCESS;
}

//dynamic code 