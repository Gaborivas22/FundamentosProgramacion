#include <stdio.h>
#include <math.h>
#define p printf
#define s scanf
int main(){
	char o;
	do{	
		int n[3][3],i,j;
		p("Este programa lee y muestra una matriz de 3x3\n");
		p("Ingresa los 9 numeros del array \n");
		for(i=0; i<3;i++){
			for(j=0; j<3;j++){
				s("%i",&n[i][j]);
			}
		}
		for(i=0; i<3;i++){
			for(j=0; j<3;j++){
				p("%i\t",n[i][j]);
			}
			p("\n");
		}
		p("\nDiagonal principal\n");
		for(i=0; i<3;i++){
			p("%i\t",n[i][i]);
		}
		p("\nMatriz transpuesta\n");
		for(i=0; i<3;i++){
			for(j=0; j<3;j++){
				p("%i\t",n[j][i]);
			}
			p("\n");
		}
		printf("\nIngresa s si quieres volver a correr el programa y n si no\n");
		scanf("\n%c",&o);
	}while(o=='s');
	return 0;
}
