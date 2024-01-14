#include <stdio.h>
#include <stdlib.h>

//ACTIVIDAD 7
//AUTOR: DIEGO LEON GOVEA ORTIZ


int main() {
	int opc;
	struct inven{
            int code;
			char nom[30];
			char marca[30];
			float precio;
	}inventario[5];

	int cont;

        printf("BIENVENIDO A INVENTARIO DE TIENDA\n");
	do{
	 	printf("MENU\n1.Capturar\n2.Mostrar\n3.Salir\n");
	 	printf("Dame una opcion: ");
	 	scanf("%i", &opc);
	 	switch(opc){
	 		case 1:system("cls");
	 		    printf("Captura de datos\n");
	 			for (cont=0;cont<5;cont++){
					printf("Codigo: ");
					scanf("%i",&inventario[cont].code);
					fflush(stdin);
					printf("Nombre %i: ",cont+1);
					gets(inventario[cont].nom);
					printf("Marca: ");
					gets(inventario[cont].marca);
					printf("Precio unitario del producto: ");
					scanf("%f",&inventario[cont].precio);
					fflush(stdin);
				}
	 			break;
	 		case 2: system("cls");
	 		    printf("Mostrar datos\n");
	 		for (cont=0;cont<5;cont++){
					printf("Codigo %i ", inventario[cont].code);
					printf("\tNombre: %s ",inventario[cont].nom);
					printf("\tMarca: %s ",inventario[cont].marca);
					printf("\tPrecio: %.2f \n",inventario[cont].precio);
					fflush(stdin);
				}
	 			break;
	 		case 3: system("cls");
	 		    printf("Hasta la proximma!!!!!!! \n");
	 			break;2
	 		default: printf("\nOpcion incorrecta, ingresa otra opción \n");
		 }

	}while(opc!=3);
}
