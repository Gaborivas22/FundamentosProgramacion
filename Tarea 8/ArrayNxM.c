/*
Este programa fue creado por gabriel rivas 
si lo copias recuerda borrar este cacho o cambiarle el nombre jejej
*/

#include <stdio.h>
#include <math.h>
#define p printf
#define s scanf

int main() {
	int F,C,fc,con=0,con2=0,i,j;
	p("Este programa lee un arreglo nxm y almacena en arreglos unidimensionales ");
	p("los numeros pares y los numeros impares\n");
	p("Ingrese el numero de filas de su matriz\n");
	s("%i",&F);
	p("Ingrese el numero de columnas de su matriz\n");
	s("%i",&C);
	fc=F*C;
    int m1[F][C],m2[fc],m3[fc];
    p("Ingrese los elementos de la matriz :\n");
    for (i = 0; i < F; i++) {
        for (j = 0; j < C; j++) {
            s("%i", &m1[i][j]);
            if(m1[i][j]%2==0){
				m2[con]= m1[i][j]; 
				con++;       	
			}
			else{
				m3[con2]= m1[i][j];
				con2++;  
			}
        }
    }
    p("La matriz es\n");
	for (i = 0; i < F; i++) {
        for (j = 0; j < C; j++) {
            p("%i\t", m1[i][j]);
        }
        p("\n");
    }
    p("La matriz de pares es\n");
	for (i = 0; i < con; i++) {
        p("%i\t", m2[i]);
    }
    p("\nLa matriz de impares es\n");
	for (i = 0; i < con2; i++) {
        p("%i\t", m3[i]);
    }    
    return 0;
}
