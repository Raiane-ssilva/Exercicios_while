#include <stdio.h>

int main() {
    int numero, digito;
    int par=0,impar=0;
    
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Por favor, digite um número inteiro positivo.\n");
        return 1;
    }

    while (numero > 0) {
        digito = numero % 10;

        if (digito % 2 == 0) {
            par++;
        } else {
            impar++;
        }

        numero = numero / 10;
    }

    printf("%d pares, %d ímpares\n", par, impar);

    return 0;
}

