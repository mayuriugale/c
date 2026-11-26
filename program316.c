#include<stdio.h>
#include<stdlib.h>

     void Display( int ptr[])     //fun
{
   
   int iCnt =0;
   for(iCnt =0; iCnt <5; iCnt++)
   {
   printf("%d\n",ptr[0]);
   }
   
}

int main()
{ 
   int Arr[7] = {11,21,51,111,121,131,341};

   
   Display(Arr); ////display(100);
   
   
    return EXIT_SUCCESS;
}
///using [] becz * ha samjto na pointer ahe [] ne samjt nahi 