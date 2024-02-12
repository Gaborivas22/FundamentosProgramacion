#include <stdio.h>
#include <math.h>
#define p printf
#define s scanf

/*
int main() {
    int m[3][4],im[3][4],i,j;
	p("Este programa lee 2 arreglos y separa los impares\n");	
    p("Ingrese los elementos de la matriz 3x4:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            s("%i", &m[i][j]);
        }
    }
    p("Array inicial:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            p("%i\t", m[i][j]);
            if((m[i][j]%2)!=0){
				im[i][j]=m[i][j];
			}
			else{
				im[i][j]=0;
			}
        }
        p("\n");
    }
    p("Array con impares o ceros:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            p("%i\t", im[i][j]);
        }
        p("\n");
    }
    return 0;
}
*/

/*
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

*/
/*
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
*/

/*
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
*/
/*
int main() {
	int F,C,fc,con=0,con2=0,i,j;
	p("Este programa lee un arreglo nxm y almacena en arreglos unidimensionales ");
	p("los numeros pares y los numeros impares\n");
	p("Ingrese el numero de filas de su matriz\n");
	s("%i",&F);
	p("Ingrese el numero de columnas de su matriz\n");
	s("%i",&C);
	fc=F*C;
    int m1[F][C],m2[fc],m3[fc];
    p("Ingrese los elementos de la matriz :\n");
    for (i = 0; i < F; i++) {
        for (j = 0; j < C; j++) {
            s("%i", &m1[i][j]);
            if(m1[i][j]%2==0){
				m2[con]= m1[i][j]; 
				con++;       	
			}
			else{
				m3[con2]= m1[i][j];
				con2++;  
			}
        }
    }
    p("La matriz es\n");
	for (i = 0; i < F; i++) {
        for (j = 0; j < C; j++) {
            p("%i\t", m1[i][j]);
        }
        p("\n");
    }
    p("La matriz de pares es\n");
	for (i = 0; i < con; i++) {
        p("%i\t", m2[i]);
    }
    p("\nLa matriz de impares es\n");
	for (i = 0; i < con2; i++) {
        p("%i\t", m3[i]);
    }    
    return 0;
}
*/

/*
int main() {
    int m[3][3],m2[3][3],i,j;
    p("Este programa lee un arreglo 3x3 y almacena los multiplos de 5 en otro arreglo\n");
    p("Ingrese los elementos de la matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            s("%i", &m[i][j]);
            if((m[i][j]%5)==0){
				m2[i][j]=m[i][j];
			}
			else{
				m2[i][j]=1;
			}
        }
    }
    p("\nMatriz original:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            p("%d\t", m[i][j]);
        }
        p("\n");
    }

    p("\nArreglo de multiplos de 5:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            p("%i\t", m2[i][j]);
        }
        p("\n");
    }

    return 0;
}
*/
//*
int main() {
	int i,n[15];
	p("Este programa genera 15 numeros alatorios y los almacena en un arreglo\n");
    p("Numeros aleatorios:\n");
    for (i = 0; i < 15; i++) {
        int nRandom = rand()% 101;
        n[i]=nRandom;
    }
    for (i = 0; i < 15; i++) {
        p("%i\t",n[i]);
    }
    return 0;
}
//*/

