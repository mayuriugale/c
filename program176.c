//**** */
//$$$$
//5
//12345
#include<stdio.h>
#include<stdlib.h>

 void pattern(int iNo)  
 {
int iCnt = 0;
for(iCnt =1; iCnt <= iNo; iCnt++);
{
 printf("%d\t",iCnt);
}
 }

int main()
{
  int iValue = 0;
  printf("enetr ferquency");
  scanf("%d",&iValue);
 pattern(7);
return EXIT_SUCCESS;
}
 