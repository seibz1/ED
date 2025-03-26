#include <stdio.h>

void converterTempo(int totalSegundos, int *horas, int *minutos, int *segundos) {
    *horas = totalSegundos / 3600;
    *minutos = (totalSegundos % 3600) / 60;
    *segundos = totalSegundos % 60;
}

int main() {
    int segundos, horas, minutos;

    printf("Digite o total de segundos: ");
    scanf("%d", &segundos);

    converterTempo(segundos, &horas, &minutos, &segundos);

    printf("Tempo convertido: %d horas, %d minutos e %d segundos\n", horas, minutos, segundos);

    return 0;
}