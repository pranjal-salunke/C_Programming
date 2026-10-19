////////////////////////////////////////////////////////////////////////
//
// Function Name : Check
// Description   : used to check whether a number is divisible by 5 or not
// Input         : Integer
// Output        : Integer
// Author        : Pranjal Salunke
// Date          : 19/10/2026
//
///////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

bool Check(int iNo)
{
    if(iNo % 5 == 0)
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

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == true)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisible by 5\n");
    }
 
    return 0;


}