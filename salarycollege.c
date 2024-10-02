#include <stdio.h>
int main() {
    float basicSalary, TA , da, grossSalarY;
    printf("Enter the basic salary: ");
    scanf("%f", &basicSalary);
    TA = basicSalary*(20 / 100);
    da = basicSalary*(40 /100 );
    grossSalarY = basicSalary + TA + da;
    printf("The Gross Value is: %.2f \n", grossSalarY);
    return 0;
}