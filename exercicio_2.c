#include <stdio.h>

int main() {
    int numero, soma = 0;

    do {
        printf("Digite um número inteiro (0 para sair): ");
        scanf("%d", &numero);

        soma += numero;
    } while (numero != 0);

    printf("Soma = %d\n", soma);

    return 0;
}
