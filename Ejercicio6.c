#include <stdio.h>

int main() 
{
    int sueldo, descuento, sueldoT;
    printf("Cuanto es tú sueldo?");
    scanf("%d", &sueldo);
    if (sueldo<1000) 
    {
        descuento= sueldo*0.15;
        printf("el sueldo total es:%d\n",sueldoT=sueldo+descuento);
    }
    else 
    {
        descuento= sueldo*0.12;
        printf("el sueldo total es:%d\n",sueldoT=sueldo+descuento);
    }
    return 0;
}
