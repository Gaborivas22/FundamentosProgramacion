/*
Este programa fue creado por gabriel rivas 
si lo copias recuerda borrar este cacho o cambiarle el nombre jejej
*/

#include <stdio.h>
#include <math.h>
#define p printf
#define s scanf

/* 
Por medio de la función de números aleatorios, obtener un arreglo de 15 números. Mostrar el
arreglo.
*/

int main() {
	int i,n[15];
	p("Este programa genera 15 numeros alatorios y los almacena en un arreglo\n");
    p("Numeros aleatorios:\n");
    for (i = 0; i < 15; i++) {
        int nRandom = rand()% 101;
        n[i]=nRandom;
    }
    for (i = 0; i < 15; i++) {
        p("%i\t",n[i]);
    }
    return 0;
}
