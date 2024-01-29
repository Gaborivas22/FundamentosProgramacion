/*
Este programa fue creado por gabriel rivas 
si lo copias recuerda borrar este cacho o cambiarle el nombre jejej
*/

#include <stdio.h>
#include <math.h>
#define p printf
#define s scanf

/* 
Leer números y almacenarlos en un arreglo de 5x4. Mostrar el arreglo, mostrar los números pares y el promedio.
*/

int main(){
	float prom;
	int n[5][4],i,j,c;
	p("Este programa lee y muestra una matriz de 5x4\n");
	p("Ingresa los 20 numeros del array \n");
	for(i=0; i<5;i++){
		for(j=0; j<4;j++){
			s("%i",&n[i][j]);
			if((n[i][j]%2)==0){
				c++;
			}
		}
	}
	p("Tu array es\n");
	for(i=0; i<5;i++){
		for(j=0; j<4;j++){
			p("%i\t",n[i][j]);
		}
		p("\n");
	}
	if(c==0){
		p("\nNo hubo numeros pares");
	}
	else{
		p("\nEl arreglo de numeros pares es:\n");
		for(i=0; i<5;i++){
			for(j=0; j<4;j++){
				if((n[i][j]%2)==0){
					p("%i\t",n[i][j]);
					prom=prom+n[i][j];
				}
			}
		}
		prom=prom/c;
		p("\nEl promedio de numeros pares es %.2f",prom);	
	}
	return 0;
}
