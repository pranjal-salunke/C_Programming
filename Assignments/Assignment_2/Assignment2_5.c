////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkEven
// Description   : to check the number is even or odd
// Input         : Integer
// Output        : Integer
// Author        : Pranjal Salunke
// Date          : 19/10/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

bool ChkEven(int iNo)
{
    if (iNo % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter a number: \n");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    if (bRet == true)
    {
        printf("%d is even number\n", iValue);
    }
    else
    {
        printf("%d is odd number\n", iValue);
    }

    return 0;
}

   