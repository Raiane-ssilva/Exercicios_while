

#include <stdio.h>

int main()
{
    int n;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("numero invalido, digite um número inteiro positivo.\n");
    }

    while (n >= 0) {
        printf("%d ", n);
        n--;
    }

    printf("\n");

    return 0;
}