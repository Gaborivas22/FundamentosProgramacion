/*
Este programa fue creado por gabriel rivas 
si lo copias recuerda borrar este cacho o cambiarle el nombre jejej
*/

#include <stdio.h>
#include <math.h>
#define p printf
#define s scanf

/* 
Leer 20 números en un rango de 20 a 70 y almacenarlo en un arreglo. Mostrar el arreglo.
*/

int main(){
	int i,j,n[4][5];
	p("Este programa lee 20 numeros en cierto rango y muestra el arreglo obtenido\n");
	p("Ingresa los 20 numeros en un rango de 20 a 70 del array \n");
	for(i=0; i<4;i++){
		for(j=0; j<5;j++){
			s("%i",&n[i][j]);
			while(n[i][j]>70||n[i][j]<20){
				p("Lo ingresado no esta dentro del rango, ingrese un numero de nuevo\n");
				s("%i",&n[i][j]);
			}
		}
	}
	p("El arreglo obtenido es:\n");
	for(i=0; i<4;i++){
		for(j=0; j<5;j++){
			p("%i\t",n[i][j]);
		}
		p("\n");
	}
	return 0;
}
