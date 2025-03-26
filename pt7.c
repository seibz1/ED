#include <stdio.h>

void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;
    printf("Digite dois numeros: ");
    scanf("%d %d", &num1, &num2);

    troca(&num1, &num2);

    printf("Depois da troca: \n num 1: %d \n num 2:%d\n", num1, num2);

    return 0;
}