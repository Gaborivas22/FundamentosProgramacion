/*
Este programa fue creado por gabriel rivas 
si lo copias recuerda borrar este cacho o cambiarle el nombre jejej
*/

#include <stdio.h>
#include <math.h>
#define p printf
#define s scanf

/* 
Leer un arreglo de 3x3. En otro arreglo de la misma dimensión, almacenar los números que sean
múltiplos de 5. En la posición donde no haya números múltiplos de 5 almacenar un 1. Mostrar los
dos arreglos.
*/

int main() {
    int m[3][3],m2[3][3],i,j;
    p("Este programa lee un arreglo 3x3 y almacena los multiplos de 5 en otro arreglo\n");
    p("Ingrese los elementos de la matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            s("%i", &m[i][j]);
            if((m[i][j]%5)==0){
				m2[i][j]=m[i][j];
			}
			else{
				m2[i][j]=1;
			}
        }
    }
    p("\nMatriz original:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            p("%d\t", m[i][j]);
        }
        p("\n");
    }

    p("\nArreglo de multiplos de 5:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            p("%i\t", m2[i][j]);
        }
        p("\n");
    }

    return 0;
}
