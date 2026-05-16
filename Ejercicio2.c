#include <stdio.h>
#include <math.h>

int main() {
    float radio;
    printf("Programa para calcular el area y la circunferencia de un circulo");

    printf("ingresa el radio");
    scanf("%f", &radio);
    printf("La circunferencia es: %f\n", 2 * M_PI * radio);
    printf("El area es: %f\n", M_PI*radio*radio);
    return 0;
}
