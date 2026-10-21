//////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CalculateDiscount
// Description   : to calculate final payable amount after applying shopping discount
// Input         : Float
// Output        : Float
// Author        : Pranjal Salunke
// Date          : 19/10/2026
//
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if (fAmount < 0.0f)
    {
        printf("Invalid Purchase Amount\n");
    }
    else if (fAmount < 1000.0f)
    {
        fFinalAmount = fAmount;
        printf("Payable Amount = %.2f\n", fFinalAmount);
    }
    else if (fAmount < 5000.0f)
    {
        fDiscount = fAmount * 0.10f;
        fFinalAmount = fAmount - fDiscount;
        printf("Payable Amount = %.2f\n", fFinalAmount);
    }
    else
    {
        fDiscount = fAmount * 0.20f;
        fFinalAmount = fAmount - fDiscount;
        printf("Payable Amount = %.2f\n", fFinalAmount);
    }
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount: ");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}