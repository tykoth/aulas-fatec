// Lista 5 ex 5
#include <stdio.h>
#include <stdbool.h>

bool ParImpar(int num){
    return (num %2==0);
}

void main(){
    int entrada;
    printf("Me informe um inteiro que te direi se e par ou impar\n");
    scanf("%d", &entrada);
    printf("O numero e %s", (ParImpar(entrada) == true) ? "par":"impar");
}
