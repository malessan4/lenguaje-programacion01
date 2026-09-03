/* =================================================================
Autor: [Matias Alessandrello]
Fecha: [03/09/2026]
Descripcion: [Actividad 1]
====================================================================
*/

#include <stdio.h>

int sumar(int a, int b);

// Programa principal
int main(void)
{
    int x, y, resultado;

    printf("ingrese un numero para sumar: ");
    scanf("%d", &x);
    printf("ingrese otro numero: ");
    scanf("%d", &y);

    resultado = sumar(x, y);

    printf("Resultado: %d\n", resultado);

    return 0;
}

int sumar(int a, int b)
{
    return a + b;
}