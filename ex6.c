#include <stdio.h>

int main() {
    int A;
    
    printf("Tabela Verdade do Operador NÃO\n");
    printf("A: !A\n");
    printf("---------\n");
    
    for (A = 0; A <= 1; A++) {
        printf("%d: ! %d = %d\n", A, A, !A);
    }
    
    return 0;
}