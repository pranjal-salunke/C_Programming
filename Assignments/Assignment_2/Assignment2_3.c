////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : It is used to accept a number and if the number is less than 10 then it will print "Hello", otherwise it will print "Demo"
// Input         : Integer
// Output        : *
// Author        : Pranjal Salunke
// Date          : 19/10/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display (int iNo)
{
    if( iNo < 10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter a number: \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}