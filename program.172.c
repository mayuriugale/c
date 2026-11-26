#include<stdio.h>
#include<stdlib.h>

float AverageDigits(int iNo)
{
    int iDigit= 0 ,iSum = 0, iCount =0;
    float fAvg =0.0f;
    float iAverage =0;
   if(iNo<0)
   {
    iNo =  -iNo;
   }
   iSum = SumDigits(iNo);
   iCount= CountDigit(iNo);
  
}

int main()
{`  
int iValue = 0;
 float fRet =0.0f;
 

printf("enter number:,\n");
scanf("%d",&iValue);
fRet = AverageDigits(iValue);
 printf("Average  of Digits%.2f",fRet);
return EXIT_SUCCESS;

}//6754 input -> 