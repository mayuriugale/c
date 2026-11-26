#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  int iCount = 0;
   char Arr[20] = "Jay ganesh";//10
   char *ptr = NULL;//*pointer

         ptr = &(Arr[0]);
          while (*ptr != '\0')  
         {
         iCount++;
         ptr++;
         }
   printf("entered string is:%d\n",iCount);
   return EXIT_SUCCESS;
}

