//*
// input ; 4
   //outp  1 a 2 b 3 c 4 d 
//*
#include<stdio.h>
#include<stdlib.h>

void pattern(int iNo)
{
   int iCnt = 0;
   char ch = '\0';

   ch = 'a';
   for(iCnt =1, ch = 'a'; iCnt <= iNo; iCnt++, ch++)
   {
      printf("%d\t%c\t",ch);
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