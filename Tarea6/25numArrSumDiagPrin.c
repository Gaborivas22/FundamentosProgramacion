/*
Este programa fue creado por gabriel rivas 
si lo copias recuerda borrar este cacho o cambiarle el nombre jejej
*/

#include <stdio.h>
#include <math.h>
#define p printf
#define s scanf

/* 
Leer 25 números y almacenarlos en un arreglo. Mostrar el arreglo y la suma de la diagonal principal.
*/

int main(){
	int n[5][5],i,j,ss;
	p("Este programa lee y muestra una matriz de 5x5, ademas de su diagonal principal\n");
	p("Ingresa los 25 numeros del array \n");
	for(i=0; i<5;i++){
		for(j=0; j<5;j++){
			s("%i",&n[i][j]);
		}
	}
	p("El arreglo es:\n");
	for(i=0; i<5;i++){
		ss=ss+n[i][i];
		for(j=0; j<5;j++){
			p("%i\t",n[i][j]);
		}
		p("\n");
	}
	p("La suma de la diagonal principal es %i\n",ss);
	return 0;
}
