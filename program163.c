#include<stdio.h>>
#include<stdlib.h>

void DisplaoddyDigits(int iNo)
{
    int iDigit= 0;
    if (iNo < 0)
    {
        iNo = -iNo;
}
while (iNo !=0)
{
    iDigit = iNo % 10;
    if(iDigit % )
    
    printf("%d\n",iDigit);
    iNo = iNo/10;
}
}
int main()
{
int iValue = 0;

printf("enter number:");
scanf("%d",&iValue);
DisplayoddDigits(iValue);
return EXIT_SUCCESS;

}
