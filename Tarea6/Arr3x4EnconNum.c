/*
Este programa fue creado por gabriel rivas 
si lo copias recuerda borrar este cacho o cambiarle el nombre jejej
*/

#include <stdio.h>
#include <math.h>
#define p printf
#define s scanf

/* 
Leer números y almacenarlos en un arreglo de 3x4, solicitar otro número Mostrar el arreglo y cuantas veces se encontró
el número.
*/
int main(){
	char o;
	do{	
		int n[3][4],i,j,g,c=0;
		p("Este programa lee y muestra una matriz de 3x4\n");
		p("Ingresa los 12 numeros del array \n");
		for(i=0; i<3;i++){
			for(j=0; j<4;j++){
				s("%i",&n[i][j]);
			}
		}
		p("Ingresa el numero que quieres ver cuantas veces se repite\n");
		s("%i",&g);
		p("Este fue tu arreglo\n");
		for(i=0; i<3;i++){
			for(j=0; j<4;j++){
				p("%i\t",n[i][j]);
				if(g==n[i][j]){
					c++;
				}
			}
			p("\n");
		}
		p("El numero se repitio %i veces",c);
		printf("\nIngresa s si quieres volver a correr el programa y n si no\n");
		scanf("\n%c",&o);
	}while(o=='s');
	return 0;
}
