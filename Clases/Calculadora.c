#include<stdio.h>
int main(){
	int num;
	float n1,n2;
	
	printf("Opcion 1: Suma \nOpcion 2: Resta\nOpcion 3: Multiplicacion\nOpcion 4: Division\n");
	printf("Dame un n%cmero\n",163);
	scanf("%f", &n1);
	printf("Dame un n%cmero\n",163);
	scanf("%f", &n2);
	printf("Dame un n%cmero del 1 al 4 para saber que operacion realizar\n",163);
	scanf("%i",&num);
	switch(num)
	{
	    case 1:
	    	n1=n1+n2;
	        printf("El resultado de la suma es: %.2f", n1);
	        break;
	    case 2:
	    	n1=n1-n2;
	        printf("El resultado de la resta del primero menos el segundo es: %.2f ", n1);
	        break;
	    case 3:
	    	n1=n1*n2;
	        printf("El resultado de la multiplicacion es: %.2f", n1);
	        break;
	    case 4:
			if(n2==0)
	    		printf("No se puede dividir entre 0");
	    	else{
	    		n1=n1/n2;
	    		printf("El resultado de la division es: %.2f", n1);
			}
	       break;
	    default:
	       printf("\nOpcion no valida");
	    return 0;
	}
}