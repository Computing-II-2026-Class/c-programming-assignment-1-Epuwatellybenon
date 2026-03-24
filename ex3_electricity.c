/* Name: Epuwat Elly Benon*/
/* Student Number: 25/U/BIE/18668/PE*/
#include <stdio.h>
int main(void)
{
    float unitsConsumed, costPerUnit, totalBill;

    printf("Enter the number of units consumed: \n");
    scanf("%f", &unitsConsumed);

    printf("Enter the cost per unit: \n");
    scanf("%f", &costPerUnit);

    totalBill = unitsConsumed * costPerUnit;
    printf("Total bill: %.2f\n", totalBill);

    return 0;
}
