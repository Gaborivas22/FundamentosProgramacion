/*
Este programa fue creado por gabriel rivas 
si lo copias recuerda borrar este cacho o cambiarle el nombre jejej
*/

#include <stdio.h>
#include <math.h>
#define p printf
#define s scanf

int main() {
    int n[20],i,np[20],c=0;
    p("Este programa lee un arreglo de 20 numeros y almacena las posiciones de los pares\n");
    p("Ingrese 20 numeros:\n");
    for (i = 0; i < 20; i++) {
        s("%i", &n[i]);
    }
    p("\nArreglo de 20 numeros:\n");
    for (i = 0; i < 20; i++) {
        p("%i\t", n[i]);
        if (n[i] % 2 == 0) {
            np[c]=i+1;
            c++;
        }
    }
	p("\nPosiciones pares:\n");
    for (i = 0; i < c; i++) {
        p("%i\t", np[i]);
	}
    return 0;
}
