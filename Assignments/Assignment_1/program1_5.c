////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Accept
// Description   : It is used to accept a number from user and print that number of * on screen
// Input         : Integer
// Output        : *
// Author        : Pranjal Salunke
// Date          : 19/10/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter a number:\n");
    scanf("%d", &iValue);

    Accept(iValue);

    return 0;

}