#include<stdio.h>
#include<stdlib.h>
void Display(char *str)
{
  while (*str != '\0')
  {
    printf("%c\n",*str);
    str++;
  }
  
}
int main()
{
    char Arr[100];

    printf("enter string :\n");
    scanf("%s[^\n]s",Arr);
      
    
      Display(Arr);//display
    return EXIT_SUCCESS;
}

