/*
Este programa fue creado por gabriel rivas 
si lo copias recuerda borrar este cacho o cambiarle el nombre jejej
*/

#include <stdio.h>
#include <math.h>
#define p printf
#define s scanf

/* 
Leer un arreglo de 20 números y por medio de una función mostrar el arreglo original y el
arreglo a la inversa de cómo se leyó. */

int i;
void mostrarArregloeInversa(int ar[]) {
    p("El array inical es: \n");
    for (i= 0; i < 20; i++) {
        p("%i\t", ar[i]);
    }
    p("\nEl array inverso es: \n");
    for (i = 20 - 1; i >= 0; i--) {
        p("%i\t", ar[i]);
    }
    p("\n");
}

int main() {
    int n[20];
    p("ingresa los numeros del array: \n");
    for (i = 0; i<20; i++) {
        s("%i", &n[i]);
    }
    mostrarArregloeInversa(n);
    return 0;
}
