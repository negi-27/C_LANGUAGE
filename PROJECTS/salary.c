#include <stdio.h>

int main() {
    float basic, hra, da, gross;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    hra = 0.20 * basic;      
    da  = 1.50 * basic;      
    gross = basic + hra + da;

    printf("\n----- Salary Details -----\n");
    printf("Basic Salary : %.2f\n", basic);
    printf("HRA          : %.2f\n", hra);
    printf("DA           : %.2f\n", da);
    printf("Gross Salary : %.2f\n", gross);

    return 0;
}

/*
OUTPUT 

Enter Basic Salary: 12000

----- Salary Details -----
Basic Salary : 12000.00
HRA          : 2400.00
DA           : 18000.00
Gross Salary : 32400.00
*/ 