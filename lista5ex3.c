// Lista 5 ex 3
#include <stdio.h>
#include <stdbool.h>

float div(float a, float b){
    return a/b;
}

void main(){
    printf("Okay, vamos dividir. Informe o dividendo\n");

    float a, b, resultado;
    scanf("%f", &a);

    printf("Agora informe o divisor:\n");
    scanf("%f", &b);

    resultado = div(a,b);

    printf("O resultado é: %f", resultado);
}
