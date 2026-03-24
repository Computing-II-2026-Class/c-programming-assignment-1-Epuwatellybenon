/* Epuwat Elly Benon*/
/* 25/U/BIE/18668/PE */

#include <stdio.h>

int main(void)
{
    float distance_travelled, fuel_used, fuel_efficiency;

    printf("Enter distance(km):\n");
    scanf("%f", & distance_travelled);

    printf("Enter fuel used(litres):\n");
    scanf("%f", &fuel_used);

    fuel_efficiency= distance_travelled/fuel_ueed;

    printf("fuel_efficiency:%.2f km/l\n", fuel_efficiency);
    
    return 0;
}
