#include<stdio.h>
#include<stdlib.h>

void Display()     //fun
{

}
int main()
{ 
   int Arr[5] = {10,20,30,40,50};
 printf("%x\n",Arr);
  printf("%x\n",&Arr);
   printf("%x\n",&Arr[0]);

    return EXIT_SUCCESS;
}