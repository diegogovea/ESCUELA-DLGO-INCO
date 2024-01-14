//Act 1 - Volumen de un Circulo
//Autor: Diego Govea
//Elaboración del programa: 20/09/2021
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define M_PI 3.14159265358979323846


int main(int argc, char *argv[]) {
    float r, vol;
    printf("Programa para calcular volumen de una esfera \n");
    printf("Ingresa el radio: ");
    scanf("%f",&r);
    vol=M_PI*(r*r*r)*4/3;
    printf("El volumen de la esfera es: %.2f",vol);

    return 0;
}
