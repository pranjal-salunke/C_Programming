////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : It is used to accept a number from user and display first number in secpnd number of times
// Input         : Integer
// Output        : Integer
// Author        : Pranjal Salunke
// Date          : 19/10/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo1, int iFrequency)
{
    int iNo = 0;
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d ", iNo1);
    }
}

int main ()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter a number: \n");
    scanf("%d", &iValue);

    printf("Enter Frequency: \n");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
    
}