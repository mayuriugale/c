#include<stdio.h>
#include<stdlib.h>

 void Display()     //fun
{
   
}

int main()
{ 
  int *ptr = NULL;
  int iSize =0;
  printf("enter number of elements you want:\n");
  scanf("%d",&iSize);

  ptr = (int *)malloc(sizeof(int)*iSize);
   
    return EXIT_SUCCESS;
}

//dynamic code 