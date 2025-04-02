#include <stdio.h>

int main() {
    int a, b, c, d;
    int Num;

    printf("Digite 4 números entre 0 e 10:\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    printf("\nSaída:\n");
    
    for(Num = 0; Num < a; Num++) {
        printf("*");
    }
    printf("\n");

    for(Num = 0; Num < b; Num++) {
        printf("*");
    }
    printf("\n");

    for(Num = 0; Num < c; Num++) {
        printf("*");
    }
    printf("\n");

    for(Num = 0; Num < d; Num++) {
        printf("*");
    }
    printf("\n");

    return 0;
}