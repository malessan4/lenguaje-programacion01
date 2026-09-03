/* =================================================================
Autor: [Matias Alessandrello]
Fecha: [03/09/2026]
Descripcion: [Actividad 2]
====================================================================
*/

#include <stdio.h>

int sumar(int a, int b, int c);
double promediar(int suma, int cantidad);

int main(void)
{

    int x = 0;
    int y = 0;
    int z = 0;
    int suma = 0;
    double promedio = 0.0;

    printf("ingrese tres numero que seran sumados y daran el promedio de la suma: \n");
    printf("ingrese el primer numero: \n");
    scanf("%d", &x);
    printf("ingrese el segundo numero: \n");
    scanf("%d", &y);
    printf("ingrese el terce numero: \n");
    scanf("%d", &z);

    suma = sumar(x, y, z);

    promedio = promediar(suma, 3);

    printf("El resultado de la suma es: %d \n", suma);
    printf("El resultado del promedio es: %.2f \n", promedio);

    return 0;
}

int sumar(int a, int b, int c)
{
    return a + b + c;
}

double promediar(int suma, int cantidad)
{
    return (double)suma / cantidad;
}