/*
Este programa fue creado por gabriel rivas 
si lo copias recuerda borrar este cacho o cambiarle el nombre jejej
*/

#include <stdio.h>
#include <math.h>
#define p printf
#define s scanf

/* 
Mostrar la función x=cos(w)+6, donde el valor de w lo da el usuario y se lo pase como
parámetro a la función. Debe mostrar desde el valor inicial de w y hasta 10 valores más,
decidan el incremento.
*/

int i;
double calcularFuncion(double w,double inc) {
	for (i = 0; i <= 10; i++) {
		double x, incremento;
		x=cos(w) + 6;
        printf("Para w = %.2f, x = %.2f\n", w, x);
        w += inc;
    }
}

int main() {
    double w,incremento;
    printf("Ingrese el valor inicial de w: ");
    scanf("%lf", &w);

    printf("Ingrese el incremento: ");
    scanf("%lf", &incremento);

    printf("Valores de la funcion x = cos(w) + 6:\n");
	calcularFuncion(w,incremento);
	
    return 0;
}

