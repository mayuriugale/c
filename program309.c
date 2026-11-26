#include<stdio.h>
#include<stdlib.h>

void Display( int *ptr)     //fun
{
   printf("%d\n",ptr);
}
int main()
{ 
   int Arr[5] = {10,20,30,40,50};

   printf("%d",Arr);
   Display(Arr); ////display(100);
   
   
    return EXIT_SUCCESS;
}