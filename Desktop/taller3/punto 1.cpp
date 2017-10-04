
//taller funciones 
//	punto Nº1
//	hecho por Victor bruno
//	fecha 19/09/2017
#include <stdio.h>


int mult(float n1, float n2){
	float resultado=0;
	printf("ingrese un numero: ");
	scanf("%f",&n1);
	printf("ingrese otro numero: ");
	scanf("%f",&n2);
	resultado=n1*n2;
	printf("la multiplicacion es: %f",resultado);
	return resultado;
}

int main()
{
	float n1,n2;
	
	mult(n1,n2);
	
	return 0;
}

