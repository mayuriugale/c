#include<stdio.h>
#include<stdlib.h>
int main()
{
   char Arr[100];
   
   Arr[0]='G';
   Arr[0]='E';
   Arr[0]='N';
   Arr[0]='E';
   Arr[0]='S';
   Arr[0]='H';
   Arr[0]='\0';
   printf("%s\n",Arr);
    printf("size  of array is:%d\n",sizeof(Arr));
   return EXIT_SUCCESS;
}
