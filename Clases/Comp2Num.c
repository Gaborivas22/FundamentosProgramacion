#include<stdio.h>
int main() {
	int n1,n2;
	printf("Dame un n%cmero\n",163);
	scanf("%i",&n1);
	printf("Dame un n%cmero\n",163);
	scanf("%i",&n2);
	if(n1==n2) 
		printf("Ambos numeros son iguales");
	else {
		if(n1>n2)
			printf("el numero mayor es: %i", n1);
		else
			printf("el numero mayor es: %i", n2);
	}
		
}