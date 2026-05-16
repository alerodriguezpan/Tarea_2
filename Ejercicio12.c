#include <stdio.h>

int main() {
    int n, cont = 1;
    int producto = 1; 
    printf("¿Hasta qué número natural quieres calcular el producto?: ");
    scanf("%d", &n);
    while (cont <= n) {
        producto = producto * cont; 
        cont = cont + 1;
    }
    printf("\nEl producto de los primeros %d números naturales es: %d\n", n, producto);
    return 0;
}
