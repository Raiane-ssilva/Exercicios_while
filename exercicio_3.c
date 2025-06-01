#include <stdio.h>

int main() {
    int n, fatorial = 1;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Digite um número inteiro positivo.\n");
        return 1;
    }

    while (n > 1) {
        fatorial *= n;
        n--;
    }

    // Exibe o resultado
    printf("Fatorial é = %d\n", fatorial);

    return 0;
}
