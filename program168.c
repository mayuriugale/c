#include<stdio.h>
#include<stdlib.h>

void AverageDigits(int iNo)
{
    int iDigit= 0;
    int iCount = 0;
    float iAverage =0;
   if(iNo<0)
   {
    iNo = iNo;
   }
   while (iNo != 0)
   {
    iDigit =iNo%10;
    iAverage++;
    
   }
   
}

int main()
{
int iValue = 0;
 float fRet =0.0f;
 

printf("enter number:,\n");
scanf("%d",&iValue);
fRet = AverageDigits(iValue);
 printf("Average  of Digits%d",fRet);
return EXIT_SUCCESS;

}
 