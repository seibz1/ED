#include <stdio.h>

int main() {
    int num, resultado = 1;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Numero invalido. Digite um inteiro positivo.\n");
    } else {
        int i = 1;
        while (i <= num) {
            resultado *= i;
            i++;
        }
        printf("Fatorial de %d = %d\n", num, resultado);
    }

    return 0;
}