#include<stdio.h>
int main() {
	int n1,n2,n3;
	printf("Ingresa el primer n%cmero\n",163);
	scanf("%i",&n1);
	printf("Ingresa el segundo n%cmero\n",163);
	scanf("%i",&n2);
	printf("Ingresa el tercer n%cmero\n",163);
	scanf("%i",&n3);
	if (n1==n2 && n2==n3 && n1==n3)
	printf("Los 3 numeros son iguales");
	else{
		if(n1==n2){
			if(n1<n3)
				printf("El primer y segundo numero son iguales y son el menor");
			else
				printf("El tercer numero es el menor");
		}
		else{
			if(n2==n3){
				if(n2<n1)
				printf("El tercer y segundo numero son iguales y son el menor");
				else
				printf("El primer numero es el menor");
			}
			else{
				if (n1==n3){
					if(n1<n2)
					printf("El primer y tercer numero son iguales y son el menor");
					else
					printf("El segundo numero es el menor");
				}
				else{
					if(n1<n2){
						if(n1<n3)
						printf("El primer numero es el menor");
						else
						printf("El tercer numero es el menor");
					}
					else{
						if (n2<n3)
						printf("El segundo numero es el menor");
						else
						printf("El tercer numero es el menor");
					}
				}		
			}
		}
	}
}
