//////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CalculateElectricityBill
// Description   : to calculate electricity bill using slab-wise rates
// Input         : Integer
// Output        : Float
// Author        : Pranjal Salunke
// Date          : 19/10/2026
//
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if (iUnits < 0)
    {
        printf("Invalid Unit Consumption\n");
    }
    else if (iUnits <= 100)
    {
        fBill = iUnits * 5.0f;
        printf("Bill = %.2f\n", fBill);
    }
    else if (iUnits <= 200)
    {
        fBill = (100 * 5.0f) + ((iUnits - 100) * 7.0f);
        printf("Bill = %.2f\n", fBill);
    }
    else
    {
        fBill = (100 * 5.0f) + (100 * 7.0f) + ((iUnits - 200) * 10.0f);
        printf("Bill = %.2f\n", fBill);
    }
}

int main()
{
    int iUnits = 0;

    printf("Enter consumed units: ");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}