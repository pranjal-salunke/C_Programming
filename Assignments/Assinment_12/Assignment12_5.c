////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CountTwo
// Description   : to count frequency of 2 in given number
// Input         : Integer
// Output        : Integer
// Author        : Pranjal Salunke
// Date          : 09/11/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Count(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    while( iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit < 6)
        {
            iCnt++;
        }
        iNo++;
        iNo = iNo/10;
    }

    return iCnt;


}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter no : ");
    scanf("%d", &iValue);

    iRet = Count(iValue);

    printf("%d", iRet);

    return 0;


}