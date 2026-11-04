////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : RangeDisplay
// Description   : to display even numbers in a given range
// Input         : Integer
// Output        : Integer
// Author        : Pranjal Salunke
// Date          : 04/11/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
        printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point :");
    scanf("%d", &iValue1);

    printf("Enter ending point :");
    scanf("%d", &iValue2);

    RangeDisplay(iValue1, iValue2);

    return EXIT_SUCCESS;
}