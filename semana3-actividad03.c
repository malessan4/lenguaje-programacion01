/* =================================================================
Autor: [Matias Alessandrello]
Fecha: [03/09/2026]
Descripcion: [Actividad 3]
====================================================================
*/

// Leer el radio de una circunferencia y calcular su área y perímetro.

#include <stdio.h>

const float PI = 3.141592;

float calcular_area(float radio);
float calcular_perimetro(float radio);

int main(void)
{

    float radio = 0;
    float area = 0;
    float perimetro = 0;

    printf("Ingrese el radio de una circurferencia para poder calcular el area y su perimetro: \n");
    scanf("%f", &radio);

    area = calcular_area(radio);
    perimetro = calcular_perimetro(radio);

    printf("El resultado de perimetro es: %f \n", perimetro);
    printf("El resultado del area es: %f \n", area);
    return 0;
}

float calcular_area(float radio)
{
    return PI * (radio * radio);
}

float calcular_perimetro(float radio)
{
    return 2 * PI * radio;
}