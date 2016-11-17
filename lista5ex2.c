// Lista 5 ex 2
#include <stdio.h>
#include <stdbool.h>



bool verifica(int n){
    return (n >= 0);
}

void main()
{
    int numero;
    printf("Informe um numero:\n");
    scanf("%d", &numero);

    if(verifica(numero) == true){
        printf("Numero positivo");
    } else {
        printf("Numero negativo");
    };
}
