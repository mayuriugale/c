//*
// input ; 4
   //outp  A B C D
//*
#include<stdio.h>
#include<stdlib.h>

void pattern(int iNo)
{
   int iCnt = 0;
   char ch = '\0';

   ch = 'A';
   for(iCnt =1, ch = 'A'; iCnt <= iNo; iCnt++, ch++)
   {
      printf("%C\n",ch);
   }
   printf("\n");    
}
int main()
{

    int iValue = 0;

    printf("enter the value:\n");
    scanf("%d", &iValue);

         pattern(iValue);
        

    return EXIT_SUCCESS;
}