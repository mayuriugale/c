//$%&#*

#include<stdio.h>
#include<stdlib.h>

void CountFrequencyX(char *str)
{
  int iCountSmall = 0,iCountCapital =0, iCountDigits = 0,iCountSpecial = 0;
  while (str != '\0')
  {
    if(str >= 'a' && *str <='z')
    { 
      iCountCapital++;
    }
    else if(*str >= 'a' && *str <='z')
    {
       iCountSmall++;
    }
    else if(*str >= 'a' && *str <='z')
    {
       iCountDigits++;
    }
    else
    {
      iCountSpecial++;
    }
    str++;
  }
  printf("numbers of capti laterrs :%d\n",iCountCapital);
  printf("numbers of capti laterrs :%d\n",iCountDigits);
  printf("numbers of capti laterrs :%d\n",iCountSmall);
   printf("numbers of capti laterrs :%d\n",iCountSpecial);
  

}




int main()
{ 
  char Arr[100] ={'\0'};
  int iRet =0;
  printf("Enter string :\n");
  scanf("%[^'\n']s",Arr);
  iRet = CountSpecialX(Arr);
  printf("frequency of  :%d\n",iRet);
     

    return EXIT_SUCCESS;

}

