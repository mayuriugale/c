#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
   char Arr[20] = "Jay ganesh";
   char *ptr = NULL;//*pointer

         ptr = &(Arr[0]);
          while (*ptr != '\0')
          {
            /* code */
          }
          
         {
         printf("%c\n",*ptr);
         ptr++;
         }
   printf("entered string is:%s\n",Arr);
   return EXIT_SUCCESS;
}

