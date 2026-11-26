#include<stdio.h>
#include<stdlib.h>

 void Display()     //fun
{
   
}

int main()
{ 
  int *ptr = NULL;
  int iSize =0, iCnt = 0;

  printf("enter number of elements you want:\n");
  scanf("%d",iSize);

   //step1: allocate the memory
  ptr = (int *)malloc(sizeof(int)*iSize);

   //step 2:use the memory
   printf("enetr the elements:\n");
    
   for(iCnt = 0; iCnt < iSize; iCnt++);
   {
       scanf("%d\n",ptr[iCnt]);
   }
   //step 3: free the memory
   free(ptr);

    return EXIT_SUCCESS;
}

//dynamic code 