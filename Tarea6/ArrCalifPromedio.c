/*
Este programa fue creado por gabriel rivas 
si lo copias recuerda borrar este cacho o cambiarle el nombre jejej
*/

#include <stdio.h>
#include <math.h>
#define p printf
#define s scanf

/* 
Leer 20 calificaciones y almacenarlos en un arreglo de 2 dimensiones. Mostrar el arreglo y el promedio.
*/

int main(){
	int i,j;
	float n[4][5],prom,cal;
	p("Este programa lee 20 calificaciones y obtiene el promedio de todas\n");
	p("Ingresa las 20 calificaciones del array \n");
	for(i=0; i<4;i++){
		for(j=0; j<5;j++){
			s("%f",&cal);
			while(cal>10||cal<0){
				p("Lo ingresado no fue una calificacion, ingrese una de nuevo\n");
				s("%f",&cal);
			}
			n[i][j]=cal;
			prom=prom+cal;
		}
	}
	p("El arreglo es\n");
	for(i=0; i<4;i++){
		for(j=0; j<5;j++){
			p("%.2f\t",n[i][j]);
		}
		p("\n");
	}
	prom=prom/20;
	p("El promedio de calificaciones es %f",prom);
	return 0;
}
