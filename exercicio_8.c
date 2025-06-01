#include <stdio.h>

int main() {
    int n, inverso = 0, resto;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Por favor, digite um número inteiro **positivo**.\n");
        return 1;
    }

    while (n > 0) {
        resto= n % 10;
        inverso = inverso * 10 + resto;
        n = n / 10;
    }

    // Exibe o resultado
    printf("Número invertido: %d\n", inverso);

    return 0;
}


