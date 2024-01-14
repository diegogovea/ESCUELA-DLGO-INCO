//Act 3 - Multiplos de 3 y 5
//Autor: Diego Govea
//Elaboración del programa: 19/10/2021
//221349925
#include<stdio.h>
#include<stdlib.h>

int main(){
    int i;
    for (i=15;i<=45;i++){

        if(i%3 == 0 || i%5==0){
        printf("%i\n",i);
        }
    }
}
