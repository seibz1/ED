#include <stdio.h>

int soma(int *a, int *b) {
    return *a + *b;
}

int main() {
    int num1, num2;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);

    printf("A soma e: %d\n", soma(&num1, &num2));

    return 0;
}