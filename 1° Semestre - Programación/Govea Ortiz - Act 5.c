//Act 5 -MENU
//Autor: Diego Govea
//Elaboración del programa: 18/11/2021
//221349925
#include <stdio.h>
#include <stdlib.h>

int main() {
	float caracter[4][4], total, min, aux;
	int fila, columna, cont, opc=0;
	printf("BIENVENIDO A MENU DE MATRICES\n");
	printf("Captura la Matriz\n");
	for (fila=0;fila<4;fila++){
			for(columna=0; columna<4; columna++){
				printf("Valor %i , %i: ",fila,columna);
				scanf("%f", &caracter[fila][columna]);
				}	
		}
	while(opc!=13){
	
	printf("MENU\n");
	printf("1. Capturar la matriz\n");
	printf("2. Imprimir en pantalla el contenido de la matriz.\n");
	printf("3. Que haga la suma de todos los elementos de la matriz\n");
	printf("4. Que determine promedio de todos los elementos de la matriz.\n");
	printf("5. Que identifique el valor del elemento menor de todos los elementos de la matriz\n");
	printf("6. Que identifique el valor del elemento mayor de todos los elementos de la matriz\n");
	printf("7. Que identifique la cantidad de elementos que son iguales al elemento menor.\n");
	printf("8. Que identifique la cantidad de elementos que son iguales al elemento mayor.\n");
	printf("9. Que identifique la cantidad de elementos que son mayores al elemento menor.\n");
	printf("10. Que identifique la cantidad de elementos que son menores al elemento mayor.\n");
	printf("11. Que realice la suma de cada una de las cuatro filas de la matriz.\n");
	printf("12. Que realice la suma de cada una de las cuatro columnas de la matriz.\n");
	printf("13. Salir\n");
	printf("Dame la opcion: ");
	scanf("%i",&opc);
	switch(opc){
		case 1:system("cls");
			printf("Capturar la matriz:\n");
			for (fila=0;fila<4;fila++){
				for(columna=0; columna<4; columna++){
				printf("Valor %i , %i: ",fila,columna);
				scanf("%f", &caracter[fila][columna]);
				}	
			}
			break;
		case 2:system("cls");
			printf("2. Imprimir en pantalla el contenido de la matriz.\n");
			for(fila=0; fila<4; fila++){
				for(columna=0; columna<4; columna++){
					printf("%.2f \t", caracter[fila][columna]);
				}
				printf("\n");
			}
			break;
		case 3:system("cls");
			printf("\n3. Que haga la suma de todos los elementos de la matriz\n");
			total=0;
			for (fila=0;fila<4;fila++){
				for(columna=0;columna<4; columna++){
				total+=caracter[fila][columna];
				}	
			}
			printf("\nLa suma de los elementos es: %.2f\n",total);
			break;
		case 4:system("cls");
			printf("4. Que determine promedio de todos los elementos de la matriz.\n");
			total=0;
			for (fila=0;fila<4;fila++){
				for(columna=0; columna<4; columna++){
				total+=caracter[fila][columna];
				}	
			}
			printf("\nEl promedio es: %.2f\n",total/16);
			break;
		case 5:system("cls");
			printf("5. Que identifique el valor del elemento menor de todos los elementos de la matriz\n");
			aux=caracter[0][0];
			for (fila=0;fila<4;fila++){
				for(columna=0; columna<4; columna++){
					if(aux>caracter[fila][columna]){
						aux=caracter[fila][columna];
					}		
				}	
			}
			printf("\nEl elemento menor de todos es: %.2f\n", aux);
			break;
		case 6:system("cls");
			printf("\n6. Que identifique el valor del elemento mayor de todos los elementos de la matriz");
			aux=caracter[0][0];
			for (fila=0;fila<4;fila++){
				for(columna=0; columna<4; columna++){
					if(aux<caracter[fila][columna]){
						aux=caracter[fila][columna];
					}	
				}	
			}
			printf("\nEl elemento mayor es: %.2f\n", aux);
			break;
		case 7:system("cls");
			printf("7. Que identifique la cantidad de elementos que son iguales al elemento menor.\n");
			min=caracter[0][0];
					for(fila=0;fila<4;fila++){
						for(columna=0;columna<4;columna++){
							if(min>caracter[fila][columna])
								min = caracter[fila][columna];
						}
					}
					cont=0;
					for(fila=0;fila<4;fila++){
						for(columna=0;columna<4;columna++){
							if(min==caracter[fila][columna])
								cont++;
						}
					}
				printf("\nEl menor es %.2f y son %i\n",min,cont);
			break;
		case 8:system("cls");
			printf("8. Que identifique la cantidad de elementos que son iguales al elemento mayor.\n");
			min=caracter[0][0];
					for(fila=0;fila<4;fila++){
						for(columna=0;columna<4;columna++){
							if(min<caracter[fila][columna])
								min = caracter[fila][columna];
						}
					}
					cont=0;
					for(fila=0;fila<4;fila++){
						for(columna=0;columna<4;columna++){
							if(min==caracter[fila][columna])
								cont++;
						}
					}
				printf("\nEl mayor es %.2f y son %i\n",min,cont);
			break;
		case 9:system("cls");
			printf("9. Que identifique la cantidad de elementos que son mayores al elemento menor.\n");
			min=caracter[0][0];
					for(fila=0;fila<4;fila++){
						for(columna=0;columna<4;columna++){
							if(min>caracter[fila][columna])
								min = caracter[fila][columna];
						}
					}
					cont=0;
					for(fila=0;fila<4;fila++){
						for(columna=0;columna<4;columna++){
							if(min<caracter[fila][columna])
								cont++;
						}
					}
				printf("\nEl elemento menor es %.2f y hay otros %i  elementos mayores\n",min,cont);
			break;

		case 10:system("cls");
			printf("10. Que identifique la cantidad de elementos que son menores al elemento mayor.\n");
			min=caracter[0][0];
					for(fila=0;fila<4;fila++){
						for(columna=0;columna<4;columna++){
							if(min>caracter[fila][columna])
								min = caracter[fila][columna];
						}
					}
					cont=0;
					for(fila=0;fila<4;fila++){
						for(columna=0;columna<4;columna++){
							if(min>caracter[fila][columna])
								cont++;
						}
					}
				printf("\nEl mayor es %.2f y hay %i elementos menores\n",min,cont);
			break;
		case 11:system("cls");
			printf("11. Que realice la suma de cada una de las cuatro filas de la matriz.\n");
			for(fila=0;fila<4;fila++){
						total=0;
						for(columna=0;columna<4;columna++){
							total+=caracter[fila][columna];
						}
						printf("\nSuma de Fila %d = %.2f\n", fila, total);
						total=0;
					}
			break;
		case 12:system("cls");
			printf("12. Que realice la suma de cada una de las cuatro columnas de la matriz.\n");
				for(columna=0;columna<4;columna++){
						total=0;
						for(fila=0;fila<4;fila++){
							total+=caracter[fila][columna];
						}
						printf("\nSuma de Columna %d = %.2f\n", columna, total);
						total=0;
					}
			break;
		case 13:system("cls");
				printf("GRACIAS POR USAR EL PROGRAMA.\n");
			break;
		default:system("cls");
			printf("\nUPS ESA OPCION NO EXISTE\n");
			
	}
  } 
	return 0;
}
