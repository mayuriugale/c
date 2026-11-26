#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
   char Arr[100];
   printf("Enter string:\n");
   scanf("%[^'\n']s",Arr);    ///n 
   printf("entered string is:%s\n",Arr);



   return EXIT_SUCCESS;
}
