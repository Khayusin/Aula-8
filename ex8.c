#include <stdio.h>

int testa_par(int numero) {
    if (numero % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    printf("4 é par? %d\n", testa_par(4));
    printf("5 é par? %d\n", testa_par(5));
    printf("0 é par? %d\n", testa_par(0));
    printf("7 é par? %d\n", testa_par(7));
    printf("-2 é par? %d\n", testa_par(-2));

    return 0;
}