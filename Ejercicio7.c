#include <stdio.h> 

int main() 
{ 
    float distancia, tiempo, precio, descuento, preciotot; 
    printf("Cuanto es la distancia de ida y vuelta en km?"); 
    scanf("%f", &distancia); 
    printf("Cuanto es el tiempo de estancia en dias?"); 
    scanf("%f", &tiempo); 
    if (distancia>800 && tiempo>7) 
    { 
        precio= distancia*0.23;
        descuento= precio*.30;
        printf("El precio de ticket ida y vuelta es: %f\n", preciotot=precio-descuento); 
    } 
    else 
    { 
    precio= distancia*0.23;
      printf("El precio de ticket ida y vuelta es: %f\n", preciotot=precio); 
    } 
    return 0; 
} 
