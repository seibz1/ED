#include <stdio.h>

int main() {
    int num1, num2, num3, maior;

    
    printf("Digite tres numeros: ");
    scanf("%d %d %d", &num1, &num2, &num3);


    maior = num1;

    if (num2 > maior) {
        maior = num2;
    }
    if (num3 > maior) {
        maior = num3;
    }

    
    printf("O maior numero eh: %d\n", maior);

    return 0;
}