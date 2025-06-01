#include <stdio.h>

int main() {
    int n, maior,menor, primeiro=1;

    printf("Digite números inteiros (0 para encerrar):\n");

    while (1) {
        scanf("%d", &n);

        if (n == 0)
            break;

        if (primeiro) {
            maior = menor = n;
            primeiro = 0;
        } else {
            if (n > maior)
                maior = n;
            if (n < menor)
                menor = n;
        }
    }

    if (primeiro) {
        printf("Nenhum número válido foi digitado.\n");
    } else {
        printf("Máximo = %d, Mínimo = %d\n", maior, menor);
    }

    return 0;
}

