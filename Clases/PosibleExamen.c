#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define p printf
#define s scanf
#define FILAS 3
#define COLUMNAS 4
#define TAMANO_ARREGLO 20

int main() {
    int r,o;
    do{
    	p("Menu");
    	s("%d",&o);
    	switch(o){
    		case 1:{
    			float calificaciones[3][4],sumC1=0,sumC2=0,sumC3=0,sumC4=0,sumF=0;
				  int i,j;
			    // Leer calificaciones
			    printf("Ingrese las 12 calificaciones:\n");
			    for (i= 0; i < FILAS; i++) {
			        for (j = 0; j < COLUMNAS; j++) {
			            scanf("%f", &calificaciones[i][j]);
			        }
			    }
				
			    // Mostrar la matriz
			    printf("\nMatriz de calificaciones:\n");
			    for (i = 0; i < FILAS; i++) {
			        for (j = 0; j < COLUMNAS; j++) {
			            printf("%.2f\t", calificaciones[i][j]);
			            sumF=sumF+calificaciones[i][j];
			        }
			        p("\t\t %.2f",sumF);
			        printf("\n");
			    }
			    sumC1=calificaciones[0][0]+calificaciones[1][0]+calificaciones[2][0];
			    sumC2=calificaciones[0][1]+calificaciones[1][1]+calificaciones[2][1];
			    sumC3=calificaciones[0][2]+calificaciones[1][2]+calificaciones[2][2];
			    sumC4=calificaciones[0][3]+calificaciones[1][3]+calificaciones[2][3];
			    p("%.2f\t%.2f\t%.2f\t%.2f\t",sumC1,sumC2,sumC3,sumC4);
			    // Encontrar calificación más alta y más baja
			    int maxCalificacion = calificaciones[0][0];
			    int minCalificacion = calificaciones[0][0];
			    int posMaxFila, posMaxColumna, posMinFila, posMinColumna;
			
			    for (i = 0; i < FILAS; i++) {
			        for (j = 0; j < COLUMNAS; j++) {
			            if (calificaciones[i][j] > maxCalificacion) {
			                maxCalificacion = calificaciones[i][j];
			                posMaxFila = i + 1;
			                posMaxColumna = j + 1;
			            }
			            if (calificaciones[i][j] < minCalificacion) {
			                minCalificacion = calificaciones[i][j];
			                posMinFila = i + 1;
			                posMinColumna = j + 1;
			            }
			        }
			    }
			
			    // Mostrar la calificación más alta y más baja
			    printf("\nLa calificación más alta es %d y se encuentra en la posición [%d][%d].\n", maxCalificacion, posMaxFila, posMaxColumna);
			    printf("La calificación más baja es %d y se encuentra en la posición [%d][%d].\n", minCalificacion, posMinFila, posMinColumna);

			}
				break;
			case 2:{
				int numeros[TAMANO_ARREGLO];
			    int numerosPares[TAMANO_ARREGLO];
			    int i;
			    float promedioNumeros = 0.0;
			    float promedioPares = 0.0;
			

			
			    // Generar 20 números aleatorios en el rango de 20 a 50 y almacenarlos en el arreglo
			    printf("Arreglo de números generados:\n");
			    for (i = 0; i < TAMANO_ARREGLO; i++) {
			        numeros[i] = rand() % (50 - 20 + 1) + 20;
			        promedioNumeros += numeros[i];
			        printf("%d ", numeros[i]);
			    }
			    promedioNumeros /= TAMANO_ARREGLO;
			
			    // Filtrar números pares y almacenarlos en el arreglo correspondiente
			    int contadorPares = 0;
			    for (i = 0; i < TAMANO_ARREGLO; i++) {
			        if (numeros[i] % 2 == 0) {
			            numerosPares[contadorPares++] = numeros[i];
			            promedioPares += numeros[i];
			        }
			    }
			    promedioPares /= contadorPares;
			
			    // Mostrar el arreglo de números y su promedio
			    printf("\n\nPromedio de números: %.2f\n", promedioNumeros);
			
			    // Mostrar el arreglo de números pares y su promedio
			    printf("\nArreglo de números pares:\n");
			    for (i = 0; i < contadorPares; i++) {
			        printf("%d ", numerosPares[i]);
			    }
			    printf("\n\nPromedio de números pares: %.2f\n", promedioPares);
	    			
			}
				break;
			default:
				p("Esa opcion no existe\n");
				
			
		}
		p("deseas regresar al menu?\n1 si 2 no\n");
		s("%d",&r);
	}while(r==1);

    return 0;
}
