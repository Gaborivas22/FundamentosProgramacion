#include <stdio.h>
#include <math.h>
#define p printf
#define s scanf


int main(){
	char o;
	do{	
		int n[6],i,m,j,t;
		p("Este programa ordena un arreglo mediante buble sort \n");
		p("Ingresa los numeros del array \n");
		for(i=0; i<6;i++){
			s("%i",&n[i]);
		}
		for(m=0;m<5;m++){
			for(j=m+1;j<6;j++){
				if(n[m]>n[j]){
					t=n[m];
					n[m]=n[j];
					n[j]=t;
				}
			}
		}
		for(i=0;i<6;i++){
			p("%i\t",n[i]);
		}
		printf("\nIngresa s si quieres volver a correr el programa y n si no\n");
		scanf("\n%c",&o);
	}while(o=='s');
	return 0;
}
