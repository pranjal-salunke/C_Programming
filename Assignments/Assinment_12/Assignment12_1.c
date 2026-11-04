////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayDigits
// Description   : to display digits in reverse order
// Input         : Integer
// Output        : Integer
// Author        : Pranjal Salunke
// Date          : 04/11/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int DispalyDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);
        iNo = iNo / 10;
    }
    
}

int main()
{
    int iValue = 0;
     printf("Enter number : ");
     sacnf("%d", &iValue);

     DisplayDigit(iValue);
    
    return EXIT_SUCCESS;
}