////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayConvert
// Description   : it converts the case of given character
// Input         : Character
// Output        : Character
// Author        : Pranjal Salunke
// Date          : 19/10/2026
///////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

bool CheckVowel(char cValue)
{
    if (cValue == 'a' || cValue == 'e' ||
        cValue == 'i' || cValue == 'o' ||
        cValue == 'u' || cValue == 'A' ||
        cValue == 'E' || cValue == 'I' ||
        cValue == 'O' || cValue == 'U')
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
    char cValue = '\0';
    bool bRet = false;

    printf("Enter character\n");
    scanf(" %c", &cValue);

    CheckVowel(cValue);

    if (bRet == true)
    {
        printf("%d is vowel\n", cValue);
    }
    else
    {
        printf("%d is not a vowel\n", cValue);
    }

    
    return 0;
}