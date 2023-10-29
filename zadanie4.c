#include <stdio.h>

int main() {
    double num1, num2, num3;

    printf("Podaj pierwszą liczbę: ");
    scanf("%lf", &num1);

    printf("Podaj drugą liczbę: ");
    scanf("%lf", &num2);


    printf("Podaj trzecią liczbę: ");
    scanf("%lf", &num3);


    if (num1 >= num2 && num1 >= num3){
    printf("Największa liczba to: %.2lf\n", num1);
    }
    else if (num2 >= num1 && num2 >= num3) {
        printf("Największa liczba to: %.2lf\n", num2);
    }
    else if (num3 >= num1 && num3 >= num2){
        printf("Największa liczba to: %.2lf\n", num3);
    }




    return 0;
}



    


