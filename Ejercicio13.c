#include <stdio.h>

int main()
{
    int n, i, suma = 0;
    printf("Ingrese la cantidad de elementos del arreglo en enteros: ");
    scanf("%d", &n);
    int arreglo[n];
    for (i = 0; i < n; i=i+1) 
    {
        printf("Ingrese el elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
        suma = suma + arreglo[i];
    }
    printf("La suma de los elementos del arreglo es: %d\n", suma);
    return 0;
}
