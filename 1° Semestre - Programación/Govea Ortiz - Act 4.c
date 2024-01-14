/*AUTOR: DIEGO LEON GOVEA ORTIZ
ACTIVIDAD 4
SEMINARIO DE PROGRAMACIÓN*/

#include<stdlib.h>
#include<stdio.h>

int main(){
    char a[10], acum;
    int i,j,op,ex=1;

    printf("Ingresa 10 letras\n");

    for(i=0;i<10;i++){
        printf("Ingresa una letra: ");
        scanf("%s",&a[i]);
        }
    printf("Tu vector es:\n ");
    for(i=0;i<10;i++){
        printf(" %c ",a[i]);

        }

    while(op!=4){

        printf("\nMenu\n");
        printf("1.- Reescribir vector\n");
        printf("2.- Ordenar de modo ascendente\n");
        printf("3.- Ordenar de modo descendente\n");
        printf("4.- Salir\n");
        printf("\n**************************\n");
        printf("\nELIGE UNA OPCION\n");
        scanf("%d",&op);
        switch(op){
        case 1:
            for(i=0;i<10;i++){
                printf("Ingresa una letra: ");
                scanf("%s",&a[i]);
            }
            printf("Tu vector es:\n ");
            for(i=0;i<10;i++){
            printf(" %c ",a[i]);
            }
            break;
        case 2:
            for(i=0;a[i];i++){
				for(j=0;a[j];j++){
					if(a[j]>a[i])
					{
						acum=a[j];
						a[j]=a[i];
						a[i]=acum;
					}
				}
			}
		printf("\nEl vector de forma ascendente es: \n");
		for(i=0;i<10;i++)
			printf(" %c ",a[i]);
		break;
		case 3:
            for(i=0;a[i];i++){
				for(j=0;a[j];j++){
					if(a[j]<a[i])
					{
						acum=a[j];
						a[j]=a[i];
						a[i]=acum;
					}
				}
			}
		printf("\nEl vector de forma descendente es: \n");
		for(i=0;i<10;i++)
			printf(" %c ",a[i]);
		break;
		case 4:
			printf("HASTA LA PROXIMAAAA!");
			break;
		default: printf("opcion invalida\nvuelve a intentarlo");


        }
    }
    return 0;

}
