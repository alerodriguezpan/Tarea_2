#include <stdio.h>

int main() 
{
    int compra, descuento, compratot;
    printf("Cuanto es la compra?");
    scanf("%d", &compra);
    if (compra>2500) 
    {
        descuento= compra*0.08;
        printf("la compra total es:%d\n",compratot=compra-descuento);
    }
    else 
    {
        printf("la compra total es:%d",compra);
    }
    return 0;
}
