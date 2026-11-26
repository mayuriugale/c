//input 22 9.5
//      14 4.66
//    9 4.9
#include<stdio.h>
#include<stdlib.h>

void CountDigits(int iNo)
{
    int iDigit= 0;
    int iCount = 0;
   if(iNo<0)
   {
    iNo = iNo;
   }
   while (iNo != 0)
   {
    iDigit =iNo%10;
    iCount++;
   }
   
}

int main()
{
int iValue = 0;
int iRet =0;

printf("enter number:");
scanf("%d",&iValue);
iRet = CountDigits(iValue);
 printf("number  of Digits%d",iRet);
return EXIT_SUCCESS;

}
 