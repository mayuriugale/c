//*
// input ; 4
   //outp  -4 -3 -2 -1 0 1 2 3 4 
//*
#include<stdio.h>
#include<stdlib.h>

void pattern(int iNo)
{
    int iCnt =0;
    
     for(iCnt= -iNo; iCnt <=0; iCnt++)          //0(N)
     {
        printf("%d\t", iCnt);
     }

       for(iCnt=1; iCnt <= iNo; iCnt++)        //0(N)
     {
        printf("%d\t",iCnt);
     }
     
     printf("\n");
     //time complexity :0(2N)
    
}
int main()
{

    int iValue = 0;
    printf("enter the value:\n");
    scanf("%d", &iValue);
         pattern(iValue);
        

    return EXIT_SUCCESS;
}