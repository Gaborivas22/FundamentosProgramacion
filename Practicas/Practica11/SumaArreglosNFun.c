/*
Este programa fue creado por gabriel rivas 
si lo copias recuerda borrar este cacho o cambiarle el nombre jejej
*/

#include <stdio.h>
#include <math.h>
#define p printf
#define s scanf

/* 
Leer dos arreglos de N números cada uno, sumarlos. Mostrar los tres arreglos. Utilizar
funciones para leer y mostrar arreglos
*/

int i;
void leerArreglo(int array[], int N) {
    p("Ingrese %i numeros para el array:\n", N);
    for (i = 0; i < N; i++) {
        s("%i", &array[i]);
    }
}
void mostrarArreglo(int arreglo[], int N) {
    for (i = 0; i < N; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");
}
int main() {
    int N=0;
    while(N<=0){
    	p("Ingrese la longitud de los arreglos: ");
    	s("%i", &N);
    	if(N<=0){
    		p("El tamanio no existe\n");
		}
	}
    int ar1[N], ar2[N],suma[N];
    p("Ingresa los numeros para el array 1:\n");
    leerArreglo(ar1, N);
    p("Ingresa los numeros para el array 2:\n");
    leerArreglo(ar2, N);
    for (i = 0; i < N; i++) {
        suma[i] = ar1[i] + ar2[i];
    }
    p("Primer arreglo: ");
    mostrarArreglo(ar1, N);
    p("Segundo arreglo: ");
    mostrarArreglo(ar2, N);
    p("Arreglo sumado: ");
    mostrarArreglo(suma, N);
    return 0;
}
