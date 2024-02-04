/*
Este programa fue creado por gabriel rivas 
si lo copias recuerda borrar este cacho o cambiarle el nombre jejej
*/

#include <stdio.h>
#include <math.h>
#define p printf
#define s scanf

/* 
Mostrar los elementos de la serie de Fibonacci con funciones, pasándole el parámetro de
cuantos números quiere mostrar.
*/

int i;
void fibonacci(int n) {
    int a = 0, b = 1, c;
    p("Los primeros %i numeros de la serie de Fibonacci son:\n", n);
    for (i = 0; i < n; i++) {
        printf("%i ", a);
        c = a + b;
        a = b;
        b = c;
    }
    p("\n");
}

int main() {
	p("Este programa recorre la serie de fibonacci\n");
    int n;
    p("Ingrese cuantos numeros de la serie de Fibonacci desea ver: ");
    s("%i", &n);
    fibonacci(n);
    return 0;
}
