#include <stdio.h>

int main() {
    int rok;

    printf("Pdaoj rok: ");
    scanf("%d", &rok);

    if ((rok % 4 == 0 && rok % 100 != 0) || rok % 400 == 0) {
        printf("%d to rok przestępny.\n", rok);
    } else {
        printf("%d nie jest rokiem przestępnym.\n", rok);
    }

    return 0;
}
