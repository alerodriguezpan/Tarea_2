#include <stdio.h>

int main() {
    float dinero, interes, total;
    printf("Dinero: ");
    scanf("%f", &dinero);
  
    printf("Interes: ");
    scanf("%f", &interes);

    total = dinero + (dinero * interes / 100);
    printf("Total: %.2f\n", total);

    return 0;
}
