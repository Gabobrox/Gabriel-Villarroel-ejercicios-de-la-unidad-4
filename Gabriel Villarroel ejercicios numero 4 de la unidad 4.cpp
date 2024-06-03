#include <stdio.h>

int main() {
    int sumaCuadrados = 0;

    for (int i = 1; i <= 100; i++) {
        sumaCuadrados += i * i;
    }

    printf("La suma de los cuadrados de los 100 primeros números naturales es: %d\n", sumaCuadrados);

    return 0;
}
