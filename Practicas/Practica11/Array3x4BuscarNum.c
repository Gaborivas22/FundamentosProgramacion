/*
Este programa fue creado por gabriel rivas 
si lo copias recuerda borrar este cacho o cambiarle el nombre jejej
*/

#include <stdio.h>
#include <math.h>
#define p printf
#define s scanf

/* 
Leer un arreglo de 3x4 y solicitar un número al usuario. Mostrar el arreglo en forma de matriz
y cuantas veces aparece el número en el arreglo. Utilizar una función, cada quien decide cómo y
en dónde.
*/

int i,j;
void leerMatriz(int matriz[3][4]) {
    p("Ingrese los elementos del array de 3x4:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            s("%i", &matriz[i][j]);
        }
    }
}
int mostrarMatriz(int matriz[3][4],int numero) {
    int contador = 0;
	p("La matriz es:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            p("%i\t", matriz[i][j]);
            if (matriz[i][j] == numero) {
                contador++;
            }
        }
        p("\n");
    }
    return contador;
}
int main() {
    int n[3][4];
    int n1;
    leerMatriz(n);
    p("Ingrese un numero para contar cuántas veces aparece en el array: ");
    s("%i", &n1);
    int ap = mostrarMatriz(n, n1);
    if(ap==0)
    	p("El numero no aparece dentro del array");
    else
    	p("El numero %i aparece %i veces dentro del array.\n", n1, ap);
    return 0;
}
