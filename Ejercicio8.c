#include <stdio.h> 
int main() 
{ 
    int a, b; 
    printf("Cuanto es a?(numerador)"); 
    scanf("%d", &a); 
    printf("Cuanto es b?(denominador)"); 
    scanf("%d", &b); 
    if (b==0) 
    { 
        printf("la operación no se pude hacer"); 
    } 
    else 
        if(a%b==0)
        { 
      printf("%d es divisor de %d\n", b,a); 
    } 
        else {
        printf("%d no es divisor de %d\n", b,a);
        }
    return 0; 
} 
