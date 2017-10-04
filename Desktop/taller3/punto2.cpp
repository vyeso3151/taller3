
//taller funciones 
//	punto Nº2
//	hecho por Victor bruno
//	fecha 19/09/2017
#include <stdio.h>

int al_cuadrado(float n1){
	float re;
	
	printf("Ingrese un numero: ");
	scanf("%f",&n1);
	re=n1*n1;
	printf("El numero al cuadrado es: %f",re);
}

int main() {
	float n1;
	al_cuadrado(n1);
	return 0;
}

