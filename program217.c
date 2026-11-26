//*
// input ; iRow =4, iCol =4
   //outp   AAAA
          // AAAA
            //AAAA
            //AAAA
//

#include<stdio.h>
#include<stdlib.h>
 void pattern( int iRow , int iCol)
 {
   int i =0 , j=0; 

  for (i =1; i<= iRow; i++)
  {
  for (j = 1;  j<=iCol; j++)
  
  {
     if((1 % 2)==0)
     {
             printf("A\t");
     }
     else
     {
        printf("A\t");
     }
  }
     printf("\n\n");

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