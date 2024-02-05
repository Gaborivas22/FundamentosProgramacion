#include <stdio.h>
#include <math.h>
#define p printf
#define s scanf
/*
int i;
void mostrarArregloeInversa(int ar[]) {
    p("El array inical es: ");
    for (i= 0; i < 20; i++) {
        p("%i\t", ar[i]);
    }
    p("\nEl array inverso es: ");
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
*/
/*
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
*/
/*
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
*/

/*
int i,j, Fil,Col;
void mostrarMatriz(int mz[Fil][Col]) {
    for (i = 0; i < Fil; i++) {
        for (j = 0; j < Col; j++) {
            p("%i\t", mz[i][j]);
        }
        p("\n");
    }
}
void leerMatriz(int m[Fil][Col]) {
    for (i = 0; i < Fil; i++) {
        for (j = 0; j < Col; j++) {
            s("%i", &m[i][j]);
        }
    }
}
int main() {
	p("Este programa Crea dos matrices de NxM y las resta\n");
	p("Ingrese el numero de filas para el array\n");
	s("%i",&Fil);
	p("Ingrese el numero de columnas para el array\n");
	s("%i",&Col);
    int m1[Fil][Col],m2[Fil][Col], m3[Fil][Col];
    p("Ingrese los numeros de la primera matriz:\n");
    leerMatriz(m1);
    p("Ingrese los numeros de la segunda matriz:\n");
    leerMatriz(m2);
    p("El array 1 es\n");
    mostrarMatriz(m1);
    p("\n");
    p("El array 2 es\n");
    mostrarMatriz(m2);
    p("\n");
    for (i = 0; i < Fil; i++) {
        for (j = 0; j < Col; j++) {
            m3[i][j] = m1[i][j] - m2[i][j];
        }
    }
    p("El array restado es\n");
    mostrarMatriz(m3);
    return 0;
}

*/
/*
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
*/

//*
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

//*/
