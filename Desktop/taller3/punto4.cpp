
//taller funciones 
//	punto Nº4
//	hecho por Victor Bruno
//	fecha 20/09/2017

#include <stdio.h>

float decimal(float num){
	float nume,re;
	int numen;
	
	scanf("%f",&nume);
	numen=nume;
	re=nume-numen;
	return re;
}

int main() {
	float num;
	printf("%f",decimal(num));
	
	return 0;
}

