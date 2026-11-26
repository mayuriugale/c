//*
// input ; 4
   //outp  1 a 2 b 3 c 4 d 
//*
#include<stdio.h>
#include<stdlib.h>
 void pattern( int iRow , int iCol)
 {
   int i =0 , j=0; 

  for (i =1; i<= iRow; i++)
  {
  for (j = 1;  j<=iCol; j++)
  
  {
     printf("$\t");
  }
     printf("\n");

 }
 }


int main()
{ 
   int iValue1 = 0, iValue2 =0;
   printf("enter number of rows:\n");
   scanf("%d", &iValue1);
   printf("enter number of colums:\n");
   scanf("%d", &iValue2);
  
  pattern(iValue1,iValue2);
         
    return EXIT_SUCCESS;
}