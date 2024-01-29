/*
Este programa fue creado por gabriel rivas 
si lo copias recuerda borrar este cacho o cambiarle el nombre jejej
*/

#include <stdio.h>
#include <math.h>
#define p printf
#define s scanf

/* 
Leer calificaciones y almacenarlas en un arreglo de 4x3. Mostrar el arreglo y cuantas calificaciones son aprobadas.
*/

int main(){
	int i,j,con;
	float n[4][3],cal;
	p("Este programa lee 12 calificaciones y muestra cuantas son aprobads\n");
	p("Ingresa las 12 calificaciones del array \n");
	for(i=0; i<4;i++){
		for(j=0; j<3;j++){
			s("%f",&cal);
			while(cal>10||cal<0){
				p("Lo ingresado no fue una calificacion, ingrese una de nuevo\n");
				s("%f",&cal);
			}
			n[i][j]=cal;
			if(6<=cal){
				con++;
			}
		}
	}
	p("Arreglo de calificaciones \n");
	for(i=0; i<4;i++){
		for(j=0; j<3;j++){
			p("%.2f\t",n[i][j]);
		}
		p("\n");
	}
	p("Hubo %i calificaciones aprobatorias",con);
	return 0;
}
