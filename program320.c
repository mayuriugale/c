#include<stdio.h>
#include<stdlib.h>

     void Display( int Arr[],int iLength)     //fun
{
   
   int iCnt =0;
   for(iCnt =0; iCnt < iLength; iCnt++)
   {
   printf("%d\n",Arr[iCnt]);
   }
   
}

int main()
{ 
   int Brr[5] = {11,21,51,111,121};

   
   Display(Brr,5); ////display(100,7);
   
   
    return EXIT_SUCCESS;
}
///using [] becz * ha samjto na pointer ahe [] ne samjt nahi 