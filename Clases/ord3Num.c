#include<stdio.h>
int main() {
	int n1,n2,n3,t;
	printf("Ingresa el primer numero\n");
	scanf("%i",&n1);
	printf("Ingresa el segundo numero\n");
	scanf("%i",&n2);
	printf("Ingresa el tercer numero\n");
	scanf("%i",&n3);
	if(n1>n2){
		t=n1;
		n1=n2;
		n2=t;
	}
	if(n2>n3){
		t=n2;
		n2=n3;
		n3=t;
	}
	if(n1>n2){
		t=n1;
		n1=n2;
		n2=t;
	}
	printf("Los numeros ordenados de menor a mayor son %i %i %i",n1,n2,n3);
	return 0;
}
