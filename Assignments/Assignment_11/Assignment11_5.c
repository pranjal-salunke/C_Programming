////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : RangeDisplayRev
// Description   : to display numbers in a given range in reverse order
// Input         : Integer
// Output        : Integer
// Author        : Pranjal Salunke
// Date          : 04/11/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;
    

    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d\t", iCnt);
    }
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point :");
    scanf("%d", &iValue1);

    printf("Enter ending point :");
    scanf("%d", &iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return EXIT_SUCCESS;
}