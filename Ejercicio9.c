#include <stdio.h> 
int main() 
{ 
    int cont=1, n;
    printf("Que tabla de multiplicar quieres? (escribe el numero de la tabla que quieres)");
    scanf("%d", &n);
    while(cont<=10) 
    {
        printf("%d x %d = %d\n", n, cont, n * cont);
        cont= cont+1;
    }
    return 0;
}
