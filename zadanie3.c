#include <stdio.h>

int main() {
    double num1, num2;

    printf("Podaj pierwszą liczbę: ");
    scanf("%lf", &num1);

    printf("Podaj drugą liczbę: ");
    scanf("%lf", &num2);

    if (num1 > num2){
    printf("Większa liczba to: %.2lf\n", num1);
    }
    else if (num2 < num1) {
        printf("Większa liczba to: %.2lf\n", num2);
    }
    else {
        printf("Obie liczby są równe: %.2lf\n", num1);
    }



    return 0;
}

