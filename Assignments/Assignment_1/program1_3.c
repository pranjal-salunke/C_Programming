////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : It is used to print 5 to 1 numbers on screen.
// Input         : None
// Output        : integer
// Author        : Pranjal Salunke
// Date          : 19/10/2026
//
///////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Display()
{
    int i = 5;
    do 
    {
        printf("%d\n", i);
        i--;
    }
    while(i >= 1)
}

int main()
{
    Display();
    return 0;
}