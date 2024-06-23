#include <stdio.h>
#include <math.h>
#define p printf
#define s scanf

int main(){
	int n[2][2],n2[2][2],n3[2][2],i,j;
	p("Este programa lee y suma dos matriz de 2x2\n");
	p("Ingresa los 4 numeros del array \n");
	for(i=0; i<2;i++){
		for(j=0; j<2;j++){
			s("%i",&n[i][j]);
		}
	}
	p("Ingresa los 4 numeros del array 2 \n");
	for(i=0; i<2;i++){
		for(j=0; j<2;j++){
			s("%i",&n2[i][j]);
		}
	}
	for(i=0; i<2;i++){
		for(j=0; j<2;j++){
			n3[i][j]=n[i][j]+n2[i][j];
		}
	}
	p("\n Matriz 1\n\n");
	for(i=0; i<2;i++){
		for(j=0; j<2;j++){
			p("%i\t",n[i][j]);
		}
		p("\n");
	}
	p("\n Matriz 2\n\n");
	for(i=0; i<2;i++){
		for(j=0; j<2;j++){
			p("%i\t",n2[i][j]);
		}
		p("\n");
	}
	p("\n Matriz 3\n\n");
	for(i=0; i<2;i++){
		for(j=0; j<2;j++){
			p("%i\t",n3[i][j]);
		}
		p("\n");
	}
}
