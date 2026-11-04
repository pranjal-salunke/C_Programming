////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : RangeSumEven
// Description   : display the sum of all even numbers between that range
// Input         : Integer
// Output        : Integer
// Author        : Pranjal Salunke
// Date          : 04/11/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;

}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point :");
    scanf("%d", &iValue1);

    printf("Enter ending point :");
    scanf("%d", &iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    printf("The sum of all even numbers between this range is : %d\n", iRet);

    return EXIT_SUCCESS;
}