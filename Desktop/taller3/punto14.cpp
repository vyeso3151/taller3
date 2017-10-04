
//taller funciones 
//	punto Nº14
//	hecho por Victor Bruno
//	fecha 26/09/2017

#include <stdio.h>

void matriz(int f, int c){

	
	
	printf("Ingresa la cantidad de filas.");
	scanf("%d",&f);
	printf("Ingresa la cantidad de columnas.");
	scanf("%d",&c);
	
	if (f==c){
		
		printf("La matriz es simetrica");
		
	}else {
		printf("La matriz no es simetrica");
	}
	
	
	
	
}

int main() {
	int f,c;
	matriz(f,c);
	return 0;
}

