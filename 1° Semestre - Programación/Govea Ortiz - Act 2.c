//Act 2 - Salario semanal
//Autor: Diego Govea
//Elaboración del programa: 21/09/2021
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    int hr, pago, ext;
    printf("Calcula tu salario semanal \n");
    printf("Ingresa el n%cmero de horas trabajadas: ",163);
    scanf("%d",&hr);

    if(hr<=40 && hr>0){
        pago=hr*16;
        printf("Tu salario es: %i",pago);
    }
    if(hr>40 && hr<168){
        ext=hr-40;
        pago=40*16 + ext*20;
        printf("Horas extra trabajadas: %i\n",ext);
        printf("Tu salario es: %i\n",pago);
    }
    if(hr<=0 || hr>=168){
    printf("\nN%cmero inv%clido de horas. ",163,160);
    }


    return 0;
}
