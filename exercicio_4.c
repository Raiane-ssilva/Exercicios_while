#include <stdio.h>

int main() {
    float nota, soma, media;
    int contador = 0;

    while (1) {
        printf("Digite uma nota (0 a 10): ");
        scanf("%f", &nota);

        if (nota < 0 || nota > 10) {
            break;
        }

        soma += nota;
        contador++;
    }

    if (contador > 0) {
        media = soma / contador;
        printf("Média = %.2f\n", media);
    } else {
        printf("Nenhuma nota foi digitada.\n");
    }

    return 0;
}

