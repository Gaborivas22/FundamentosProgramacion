/*
Este programa fue creado por gabriel rivas 
si lo copias recuerda borrar este cacho o cambiarle el nombre jejej
*/

#include <stdio.h>
#include <math.h>
#define p printf
#define s scanf

/* 
Leer un arreglo de 3x4 de números enteros, en otro arreglo del mismo tamaño, almacenar los
números que sean impares y en donde no haya números impares poner cero, Mostrar: los dos
arreglos en forma de matriz.
*/

int main() {
    int m[3][4],im[3][4],i,j;
	p("Este programa lee 2 arreglos y separa los impares\n");	
    p("Ingrese los elementos de la matriz 3x4:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            s("%i", &m[i][j]);
        }
    }
    p("Array inicial:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            p("%i\t", m[i][j]);
            if((m[i][j]%2)!=0){
				im[i][j]=m[i][j];
			}
			else{
				im[i][j]=0;
			}
        }
        p("\n");
    }
    p("Array con impares o ceros:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            p("%i\t", im[i][j]);
        }
        p("\n");
    }
    return 0;
}
