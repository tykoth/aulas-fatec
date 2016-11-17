// Lista 5 ex 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define M_PI 3.14159265358979323846

float raio;
float resultado;

float esfera(float r){
    float rt;
    rt = (4*M_PI*pow(r,3))/3;
    return (rt);
}

void main(){
    printf("Informe o valor do raio\n");

    scanf("%f",&raio);
    resultado = esfera(raio);

    printf("Valor do volume da esfera: %f", resultado);
}

