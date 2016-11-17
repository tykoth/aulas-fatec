// Lista 5 ex 7
#include <stdio.h>

float MediaFibonacci(int valor){

    int x, a = 0, b = 1, c;

    for ( x = 0 ; x < valor ; x++ )
    {
      if ( x <= 1 )
         c = x;
      else
      {
         c = a + b;
         a = c;
         b = c;
      }
      printf("%d\n",c);
    }

    return 0;
}
void main(){
    int numero;

    do{
        printf("Informe o numero para media fibonacci\n");
        scanf("%d", &numero);
    }while(numero<=0);
    MediaFibonacci(numero);

}
