////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : FindGreater
// Description   : to find the greater of two numbers
// Input         : Integer
// Output        : Integer
// Author        : Pranjal Salunke
// Date          : 19/10/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void FindGreater(int iFirst, int iSecond)
{
    if (iFirst > iSecond)
    {
        printf("%d is Greater", iFirst);
    }
    else if (iSecond > iFirst)
    {
        printf("%d is Greater", iSecond);
    }
    else
    {
        printf("Both Numbers Are Equal");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &iValue1, &iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}