/*
Este programa fue creado por gabriel rivas 
si lo copias recuerda borrar este cacho o cambiarle el nombre jejej
*/

#include <stdio.h>
#include <math.h>
#define p printf
#define s scanf

int main() {
	int i,j,f=0,c=0;
    float cal[4][4],calMA=0;
    p("Este programa lee 16 calificaciones y muestra la mas alta junto a su posicion \n");
    p("Ingrese las calificaciones:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            s("%f", &cal[i][j]);
            while(cal[i][j]>10 || cal[i][j]<0){
            	p("Lo ingresado no es una calificacion\n");
            	s("%f", &cal[i][j]);
			}
        }
    }
    p("\nMatriz de calificaciones:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            p("%.2f\t", cal[i][j]);
            if (cal[i][j] > calMA) {
                calMA= cal[i][j];
                f = i;
                c = j;
            }
        }
        p("\n");
    }
    p("\nLa calificacion más alta es %.2f y se encuentra en la posicion [%d][%d].\n", calMA, f+1, c+1);
    return 0;
}
