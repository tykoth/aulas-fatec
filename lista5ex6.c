// Lista 5 ex 6
#include <stdio.h>
#include <stdbool.h>

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
int k, x = 1; // x = 1 por questões de exibição
void main(){

    do {
        printf("Quantos calculos vamos realizar? Informe um valor entre 1 e 10\n");
        scanf("%d", &k);
    } while(!(k>0&&k<=10));

    printf("Agora vamos calcular %d salarios", k);


    while(x <= k){
        printf("Calculando salario %d\n", x);
        scanf("%f", &salario_atual);

        salario_novo = ReajSalNovo(salario_atual);

        printf("De acordo com meus calculos, o salario antigo \"%f\" agora e \"%f\"\n", salario_atual, salario_novo);
        x++;
    }
}
