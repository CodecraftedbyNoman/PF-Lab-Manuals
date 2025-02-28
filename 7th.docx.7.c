#include <stdio.h>

float calculateIncomeTax(float salary) {
    float annualSalary = salary * 12;
    if (annualSalary < 600000) return 0;
    else if (annualSalary <= 1200000) return annualSalary * 0.025;
    else if (annualSalary <= 2400000) return annualSalary * 0.125;
    else if (annualSalary <= 3600000) return annualSalary * 0.20;
    else return annualSalary * 0.30;
}

int main() {
    float salary;
    printf("Enter monthly salary (PKR): ");
    scanf("%f", &salary);
    printf("Annual Tax = %.2f PKR\n", calculateIncomeTax(salary));
    return 0;
}
