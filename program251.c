//a e i o u

#include<stdio.h>
#include<stdlib.h>
int CountSpacesX(char *str)
{
  int iCount =0;
  while(*str!= '\0')
  { 

    if(*str == ' ' )
    {
       iCount++;
    }
    str++;

  }
    return iCount;
}
int main()
{ 
  char Arr[100] ={'\0'};
  int iRet =0;
  printf("Enter string :\n");
  scanf("%[^'\n']s",Arr);
  iRet = CountSpacesX(Arr);
  printf("frequency of white spaces is:%d\n",iRet);
     

    return EXIT_SUCCESS;
}

