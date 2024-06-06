#include<stdio.h>
int main() {
	float c;
	printf("Ingresa una calificaci%cn\n",162);
	scanf("%f",&c);
	if(c<0 || c>10)
		printf("No es una calificaci%cn valida\n",162);
	else{
		if(c>=6)
			printf("%.2f es una calificacion aprobatoria",c);
		else
			printf("%.2f no es una calificacion aprobatoria",c);	
	}	
	return 0;
}
