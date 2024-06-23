#include <stdio.h>
#include <math.h>
#define p printf
#define s scanf
int main(){
	int n[10],n2[10],n3[10],i,m,j,t;
		p("Este programa lee 2 arreglos \n");
		p("Ingresa los numeros del array 1 \n");
		for(i=0; i<10;i++){
			s("%i",&n[i]);
		}
		p("Ingresa los numeros del array 2\n");
		for(i=0; i<10;i++){
			s("%i",&n2[i]);
		}
		for(i=0; i<10;i++){
			n3[i]=n[i]+n2[i];
		}
		p("\nArray 1\n");
		for(i=0;i<10;i++){
			p("%i\t",n[i]);
		}
		p("\nArray 2\n");
		for(i=0;i<10;i++){
			p("%i\t",n2[i]);
		}
		p("\nArray sumando\n");
		for(i=0;i<10;i++){
			p("%i\t",n3[i]);
		}
	
}
