/*
Este programa fue creado por gabriel rivas 
si lo copias recuerda borrar este cacho o cambiarle el nombre jejej
*/

#include <stdio.h>
#include <math.h>
#define p printf
#define s scanf

/* 
Leer un arreglo de NxM de números pares. Mostrar el arreglo y el promedio.
*/

int main(){
	int f,g,filas=0,columnas=0,con;
	float promedio;
	p("Este programa lee un arreglo de NxM en donde almacena numeros pares \n");
	p("Ingresa el numero de filas para tu arreglo\n");
	while(filas<=0){
		s("%i",&filas);
		if(filas<=0){
			p("No puede ser 0 o negativo el tamanio\n");
		}
	}
	p("ingresa el numero de columnas que teendra tu arreglo\n");
	while(columnas<=0){
		s("%i",&columnas);
		if(columnas<=0){
			p("No puede ser 0 o negativo el tamanio\n");
		}
	}
	int arreglo[filas][columnas];
	con=filas*columnas;
	p("Ingresa los numeros en un rango del array\n");
	for(f=0; f<filas;f++){
		for(g=0; g<columnas;g++){
			s("%i",&arreglo[f][g]);
			while((arreglo[f][g]%2)!=0){
				p("Lo ingresado no es un numero par, ingrese un numero de nuevo\n");
				s("%i",&arreglo[f][g]);
			}
		}
	}
	p("El arreglo obtenido es:\n");
	for(f=0; f<filas;f++){
		for(g=0; g<columnas;g++){
			p("%i\t",arreglo[f][g]);
			promedio=promedio+arreglo[f][g];
		}
		p("\n");
	}
	promedio=promedio/con;
	p("El promedio del arreglo es: %.2f\n",promedio);
	return 0;
}
