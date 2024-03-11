#include <stdio.h>

int main() {
    double salary;

    printf("Enter your yearly salary: ");
    scanf("%lf", &salary);

    double tax;
    if (salary <= 400000) {
        tax = salary * 0.01;
    } else if (salary <= 1000000) {
        tax = 4000 + (salary - 400000) * 0.15;
    } else {
        tax = 4000 + 90000 + (salary - 1000000) * 0.25;
    }

    printf("Your tax is: %.2lf\n", tax);

    return 0;
}
