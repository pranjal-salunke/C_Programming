////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayFactors
// Description   : it displays even factors of given number
// Input         : Integer
// Output        : Ineteger
// Author        : Pranjal Salunke
// Date          : 19/10/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
void DisplayFactor(int iNo)
{
    int iCnt = 0;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            printf("%d ", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    DisplayFactor(iValue);

    return 0;
}