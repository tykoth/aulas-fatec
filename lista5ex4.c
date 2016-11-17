// Lista 5 ex 4
#include <stdio.h>

float salario_atual, salario_novo;

float ReajSalNovo(float salario){

    if(salario <= 800){
        return salario + salario * 0.15;
    }
    if(salario >= 800 && salario <= 1000){
        return salario + salario * 0.10;
    }

    if(salario >= 1000){
        return salario + salario * 0.05;
    }

}
void main(){

    printf("Aqui vamos fazer o reajuste de salario novo...\n");
    scanf("%f", &salario_atual);

    salario_novo = ReajSalNovo(salario_atual);

    printf("De acordo com meus calculos, seu novo salario é \"%f\"", salario_novo);
}
