//*
// input ; iRow =4, iCol =4
   //outp   
          // bbbb
            //cccc
            //ddddd
//

#include<stdio.h>
#include<stdlib.h>
 void pattern( int iRow , int iCol)
 {
   int i =0 , j=0; 
   char ch = '\0';

  for (i =1, i<= iRow; i++,ch++)
  {
       
  for (j = 1; ch='A', j<=iCol; j++)
  
  {
     if((1 % 2)==0)
     {
             printf("%C\t",ch);
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