#include <stdio.h>
int main() {
    int cont = 0, num, pos = 0, neg = 0, nul = 0;
    printf("Da 100 numeros y se te dira cuales son positivos, negativos y nulos\n");
    while (cont < 100) 
    {
        printf("Numero %d: ", cont + 1);
        scanf("%d", &num);
        if (num > 0) 
        {
            pos=pos+1;
        }
        else 
            if (num < 0)
            { 
            neg=neg+1;
        }
        else{
            nul=nul+1;
        }
        cont=cont+1;
    }

    printf("\nPositivos: %d\nNegativos: %d\nNulos: %d\n", pos, neg, nul);
    return 0;
}
