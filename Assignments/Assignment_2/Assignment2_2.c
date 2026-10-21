////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : It is used to accept a number from user and print that number of * on screen
// Input         : Integer
// Output        : *
// Author        : Pranjal Salunke
// Date          : 19/10/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
    
    while(iNo > 0)
    {
        printf("*\n");
        iNo--;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter a number of * to print: \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}