/*
Este programa fue creado por gabriel rivas 
si lo copias recuerda borrar este cacho o cambiarle el nombre jejej
*/

#include <stdio.h>
#include <math.h>
#define p printf
#define s scanf

/* 
Leer 2 arreglos de NxM, restar un arreglo del otro. Mostrar los 3 arreglos en forma de
matriz, la lectura y el mostrar utilizar funciones.
*/

int i,j, Fil,Col;
void mostrarMatriz(int mz[Fil][Col]) {
    for (i = 0; i < Fil; i++) {
        for (j = 0; j < Col; j++) {
            p("%i\t", mz[i][j]);
        }
        p("\n");
    }
}
void leerMatriz(int m[Fil][Col]) {
    for (i = 0; i < Fil; i++) {
        for (j = 0; j < Col; j++) {
            s("%i", &m[i][j]);
        }
    }
}
int main() {
	p("Este programa Crea dos matrices de NxM y las resta\n");
	p("Ingrese el numero de filas para el array\n");
	s("%i",&Fil);
	p("Ingrese el numero de columnas para el array\n");
	s("%i",&Col);
    int m1[Fil][Col],m2[Fil][Col], m3[Fil][Col];
    p("Ingrese los numeros de la primera matriz:\n");
    leerMatriz(m1);
    p("Ingrese los numeros de la segunda matriz:\n");
    leerMatriz(m2);
    p("El array 1 es\n");
    mostrarMatriz(m1);
    p("\n");
    p("El array 2 es\n");
    mostrarMatriz(m2);
    p("\n");
    for (i = 0; i < Fil; i++) {
        for (j = 0; j < Col; j++) {
            m3[i][j] = m1[i][j] - m2[i][j];
        }
    }
    p("El array restado es\n");
    mostrarMatriz(m3);
    return 0;
}
