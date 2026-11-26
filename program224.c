//*
// input ; iRow =4, iCol =4
   //outp   
          //#***
          //$#**
          //$$#*
          //$$$#
//           

#include<stdio.h>
#include<stdlib.h>
 void pattern( int iRow , int iCol)
 {
   int i =0 , j=0; 
   if(iRow != iCol)
   {
      printf("INVALID input\n");
      return;
   }
    else if(i >j)//lower traingal
    {
      printf("$\t");
    }

  for (i =1; i<= iRow; i++)
  {
       
  for (j = 1; j<=iCol; j++)
  
  {
     if(i ==j)
     {
             printf("%C\t");
     }
     else
     {
        printf("%d,j\t");
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