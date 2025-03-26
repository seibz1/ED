#include <stdio.h>

int main() {
    int n;
    float soma = 0, numero;

    printf("Quantos numeros voce deseja inserir? ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Digite o %dº numero: ", i);
        scanf("%f", &numero);
        soma += numero;
    }

    float media = soma / n;
    printf("A media dos numeros inseridos e: %.2f\n", media);

    return 0;
}