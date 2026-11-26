#include<stdio.h>
#include<stdlib.h>
void Display(char *str)
{
  printf("%s\n",str);
}
int main()
{
    char Arr[100];
    printf("enter string :\n");
    scanf("%s[^\n]s",Arr);
    
      Display(Arr);//display
    return EXIT_SUCCESS;
}

