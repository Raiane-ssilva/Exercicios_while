#include <stdio.h>

int main() {
    int n, a = 0, b = 1, proximo, i = 0;

    printf("Quantos termos quer na sequencia de Fibonacci? ");
    scanf("%d", &n);

    while (i < n) {
         printf("%d", a);
        proximo = a + b;
        a = b;
        b = proximo;
        i++;
    }
    
    return 0;
}
