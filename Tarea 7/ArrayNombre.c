/*
Este programa fue creado por gabriel rivas 
si lo copias recuerda borrar este cacho o cambiarle el nombre jejej
*/

#include <stdio.h>
#include <math.h>
#define p printf
#define s scanf

/* 
Leer un arreglo de 10 caracteres, mostrar si se puede formar su primer nombre sin apellidos.
*/

int main() {
    char c[10];
	int i,cg,ca,cb,cr,ci,ce,cl;
	p("Este programa lee 10 caracteres y analiza si se puede formar el nombre gabriel\n");
    p("Ingrese 10 caracteres:\n");
    for (i = 0; i < 10; i++) {
        s(" %c", &c[i]);
    }
    for (i = 0; i < 10; i++) {
        if (c[i] == 'g')
        	cg++;
		else if(c[i] == 'a')
			ca++;
		else if(c[i] == 'b')
			cb++;
		else if(c[i] == 'r') 
			cr++;
		else if(c[i] == 'i')
			ci++;
		else if(c[i] == 'e') 
			ce++;
		else if(c[i] == 'l')
			cl++; 
    }
    if (cg>0 && ca>0 &&cb>0 &&cr>0 &&ci>0 &&ce>0 &&cl>0) {
        p("Los caracteres ingresados pueden formar el nombre 'gabriel'.\n");
    } else {
        p("Los caracteres ingresados no pueden formar el nombre 'gabriel'.\n");
    }
    return 0;
}
