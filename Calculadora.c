#include <stdio.h>
#include <stdlib.h>

int main () {

    int num1;
    int num2;
    float r;
    int sinal;

    printf("Primeiro Numero:" );
    scanf("%d", &num1);
    printf("\nescolha o sinal colocando os numeros 1 soma 2 subtrai 3 divide 4 multiplica \n");
    scanf("%i", &sinal);
    printf("\nSegundo Numero:");
    scanf("%d", &num2);
        
    if (sinal == 1) {
        r = num1 + num2;
        printf("Resultado: %.2f\n", r);
    }else if(sinal == 2){
        r = num1 - num2;
        printf("Resultado: %.2f\n", r);
    }else if(sinal == 3){
        r = num1 / num2;
        printf("Resultado: %.2f\n", r);
    }else if (sinal == 4){
        r = num1 * num2;
        printf("Resultado: %.2f\n", r);
    }else {
        printf("\nVoce eh Burro ou se faz?\n");
    }


system("pause");
return 0;
}