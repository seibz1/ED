#include <stdio.h>

int main() {
    for (int i = 0; i <= 1000; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}