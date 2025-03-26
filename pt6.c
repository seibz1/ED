#include <stdio.h>

#define TAM 5

void preencherVetor(int vetor[], char nome[]) {
    printf("Digite os valores do vetor %s:\n", nome);
    for (int i = 0; i < TAM; i++) {
        scanf("%d", &vetor[i]);
    }
}

void exibirVetor(int vetor[], char nome[]) {
    printf("Vetor %s: ", nome);
    for (int i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

void trocarVetores(int v1[], int v2[]) {
    for (int i = 0; i < TAM; i++) {
        int temp = v1[i];
        v1[i] = v2[i];
        v2[i] = temp;
    }
}

int main() {
    int vetor1[TAM], vetor2[TAM];

    preencherVetor(vetor1, "1");
    preencherVetor(vetor2, "2");

    printf("\nAntes da troca:\n");
    exibirVetor(vetor1, "1");
    exibirVetor(vetor2, "2");

    trocarVetores(vetor1, vetor2);

    printf("\nDepois da troca:\n");
    exibirVetor(vetor1, "1");
    exibirVetor(vetor2, "2");

    return 0;
}