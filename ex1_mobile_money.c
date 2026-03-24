/*Name:Epuwat Elly Benon*/
/*Student number:25/U/BIE/18668/PE */

#include <stdio.h>

int main(void)
{
    float amount, fee_percentage, fee, total;

    printf("Enter amount ti send");
    scanf("%f", &amount);

    printf("Enter transaction fee");
    scanf("%f", &fee_percentage);

    fee = amount*(fee_percentage/100);

    total = amount + fee;

    printf("\nTransaction fee:%.2f UGX\n", fee);
    printf("Total deducted:%.2f UGX\n", total);

    return 0;
}
