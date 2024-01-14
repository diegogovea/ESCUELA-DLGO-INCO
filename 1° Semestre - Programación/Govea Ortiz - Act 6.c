//FUNCIONES CON PASO DE PARAMETROS Y RETORNO DE VALORES AREAS DE FIGURAS GEOMETRICAS
//AUTOR: DIEGO GOVEA
//ACTIVIDAD 6
#include<stdio.h>
#include<stdlib.h>
#define PI 3.1416


void menu();
float circulo(float r,int check);
float triangulo(float b,float h,int check);
float cuadrado(float l,int check);
float rectangulo(float b,float h,int check);
float rombo(float l,float d,float d2,int check);
float trapecio(float B,float b,float a,int check);


int main(){
	
	menu();
	
	return 0;
}

void menu(){
	int opc;
	float a,b,c;
	int ar=1,pe=2;
	printf("BIENVENIDO AL MENU DE FIGURITAS!!!!!!\n");
	do
		{
			printf("Escoge una opcion: \n");
			printf("\n1. Area de un circulo\n");
			printf("2. Area de un triangulo equilatero\n");
			printf("3. Area de un cuadrado\n");
			printf("4. Area de un rectangulo\n");
			printf("5. Area de un rombo\n");
			printf("6. Area de un trapecio\n");
			printf("7. Salir\n");
			printf("Ingrese una opcion: "); scanf("%i",&opc);
			switch(opc)
				{
					
					case 1: system("CLS"); printf("Circulo\n"); printf("Ingrese el radio: "); scanf("%f",&a);
							printf("El area del circulo con radio %.2f es %.2f\n",a,circulo(a,ar));
							printf("El perimetro del circulo con radio %.2f es %.2f\n",a,circulo(a,pe));
							system("PAUSE");
							break;
					case 2: system("CLS"); printf("Triangulo\n"); printf("Ingrese la base: "); scanf("%f",&a);
							printf("Ingrese la altura: "); scanf("%f",&b);
							printf("El area del triangulo con base %.2f y altura %.2f es %.2f\n",a,b,triangulo(a,b,ar));
							printf("El perimetro del triangulo con base %.2f es %.2f\n",b,triangulo(a,b,pe));
							system("PAUSE");
							break;
					case 3: system("CLS"); printf("Cuadrado\n"); printf("Ingrese el lado: "); scanf("%f",&a);
							printf("El area del cuadrado con lado %.2f es %.2f\n",a,cuadrado(a,ar));
							printf("El perimetro del cuadrado con lado %.2f es %.2f\n",a,cuadrado(a,pe));
							system("PAUSE");
							break;
					case 4: system("CLS"); printf("Rectangulo\n"); printf("Ingrese la base: "); scanf("%f",&a);
							printf("Ingrese la altura: "); scanf("%f",&b);
							printf("El area del rectangulo con base %.2f y altura %.2f es %.2f\n",a,b,rectangulo(a,b,ar));
							printf("El perimetro del rectangulo con base %.2f y altura %.2f es %.2f\n",a,b,rectangulo(a,b,pe));
							system("PAUSE");
							break;
							
					case 5: system("CLS"); printf("Rombo\n"); printf("Ingrese el diametro 1: "); scanf("%f",&a);
							printf("Ingrese el diametro 2: "); scanf("%f",&b);
							printf("Ingrese el lado: "); scanf("%f",&c);
							printf("El area del rombo con base %.2f y altura %.2f es %.2f\n",a,b,rombo(c,a,b,ar));
							printf("El perimetro del rombo con base %.2f y altura %.2f es %.2f\n",a,b,rombo(c,a,b,pe));
							system("PAUSE");
							break;
		
					case 6: system("CLS"); printf("Trapecio\n"); printf("Ingrese la base mayor: "); scanf("%f",&a);
							printf("Ingrese la base menor: "); scanf("%f",&b);
							printf("Ingrese la altura: "); scanf("%f",&c);
							printf("El area del trapecio con base mayor %.2f, base menor %.2f y altura %.2f es %.2f\n",a,b,c,trapecio(a,b,c,ar));
							printf("El perimetro del trapecio con base mayor %.2f, base menor %.2f y altura %.2f es %.2f\n",a,b,c,trapecio(a,b,c,pe));
							system("PAUSE");
							break;
					case 7: break;
					default: printf("ERROR, ingresa una opcion valida\n"); sleep(1);
				}
			system("CLS");
		}while(opc != 7);
		printf("Hasta la proximaaaaaa!!!!!!");
}

float circulo(float r,int check){
	float area;
	float perimetro;
	area = PI*r*r;
	perimetro= PI*r*2;
	if(check==1) return area;
	else if (check==2) return perimetro;
}

float triangulo(float b,float h, int check){
	float area;
	float perimetro;
	area = (b*h)/2;
	perimetro=b+b+b;
	if(check==1) return area;
	else if (check==2) return perimetro;
	
}

float cuadrado(float l, int check){
	float area;
	float perimetro;
	area = l*l;
	perimetro = 4*l;
	if(check==1) return area;
	else if (check==2) return perimetro;
}

float rectangulo(float b,float h, int check){
	float area;
	float perimetro;
	area = b*h;
	perimetro= (b*2)+(h*2);
	if(check==1) return area;
	else if (check==2) return perimetro;
}

float rombo(float l,float d,float d2,int check){
	float area;
	float perimetro;
	area=(d*d2)/2;
	perimetro=4*l;
	if(check==1) return area;
	else if (check==2) return perimetro;
	
}

float trapecio(float B,float b,float a,int check){
	float area;
	float perimetro;
	area= ((B+b)/2)*a;
	perimetro= (B*2)+(b*2);
	if(check==1) return area;
	else if (check==2) return perimetro;
	
}
