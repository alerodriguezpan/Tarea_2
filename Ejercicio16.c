#include <stdio.h>

int main() {
    int arreglo[100];
    int i, numero = 0, contador = 0;
    while (contador <= 100) {
        if (numero % 2 == 0) {
            arreglo[contador] = numero;
            contador = contador + 1;
        }
        numero = numero + 1;
    }
    printf("Los 100 primeros numeros pares son:\n");
    for (i = 0; i <= 100; i = i + 1) {
        printf("%5d", arreglo[i]);
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }
    return 0;
}
