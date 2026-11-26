//*
// input ; 4
   //outp  -4 -3 -2 -1 
//*
#include<stdio.h>
#include<stdlib.h>

void pattern(int iNo)
{
    int iCnt =0;
    
     for(iCnt=-iNo; iCnt <= iNo; iCnt++)  //o(2N)
     {
        printf("%d\t", iCnt);
     }
     printf("\n");
      //time compexity 0
}
int main()
{

    int iValue = 0;
    printf("enter the value:\n");
    scanf("%d", &iValue);
         pattern(iValue);
        

    return EXIT_SUCCESS;
}