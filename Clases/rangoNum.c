#include<stdio.h>
int main() {
	int n;
	printf("Ingresa un n%cmero de preferencia dentro del rango 20 a 50\n",163);
	scanf("%i",&n);
	if(n>=20 && n<=50)
		printf("El n%cmero %i esta dentro del rango",163, n);
	else
		printf("El n%cmero %i no esta dentro del rango",163, n);
	return 0;
}
