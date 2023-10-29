#include <stdio.h>

int main()
{

    double num1, num2;

    printf("podaj pierwszą liczbę: ");
    scanf("%lf", &num1);

    printf("podaj drugą liczbę: ");
    scanf("%lf", &num2);

    double suma = num1 + num2;
    double roznica = num1 - num2;
    double iloczyn = num1 * num2;
    double iloraz = num1 / num2;


    printf("Suma: %2.lf\n", suma);
    printf("Różnica: %2.lf\n", roznica);
    printf("Iloczyn: %.2lf\n", iloczyn);
    printf("Iloraz: %.2lf\n", iloraz);






    return 0;
}
