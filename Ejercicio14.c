int main() {
    int n, i, numero, contador = 0;
    printf("Ingrese la cantidad de elementos del arreglo en enteros: ");
    scanf("%d", &n);
    int arreglo[n];
    for (i = 0; i < n; i = i + 1) {
        printf("Ingrese el elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }
    printf("Ingrese el numero que desea buscar: ");
    scanf("%d", &numero);
    for (i = 0; i < n; i = i + 1) {
        if (arreglo[i] == numero) {
            contador = contador + 1;
        }
    }
    printf("El numero %d se encuentra %d veces en el arreglo.\n", numero, contador);
    return 0;
}
