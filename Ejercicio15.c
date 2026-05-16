#include <stdio.h>
int main() {
    int n, i;
    int positivos = 0, negativos = 0, nulos = 0;
    printf("Ingrese la cantidad de elementos del arreglo en enteros: ");
    scanf("%d", &n);
    int arreglo[n];
    for (i = 0; i < n; i = i + 1) {
        printf("Ingrese el elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
        if (arreglo[i] > 0) {
            positivos = positivos + 1;
        } else if (arreglo[i] < 0) {
            negativos = negativos + 1;
        } else {
            nulos = nulos + 1;
        }
    }
    printf("Cantidad de numeros positivos: %d\n", positivos);
    printf("Cantidad de numeros negativos: %d\n", negativos);
    printf("Cantidad de numeros nulos: %d\n", nulos);
    return 0;
}
