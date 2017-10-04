
//taller funciones 
//	punto Nº12
//	hecho por Victor Bruno
//	fecha 23/09/2017

#include <stdio.h>

void vect(int vec[]){
	int l,i;
	int suma=0;
	
	printf("Ingresa la longitud del vector.");
	scanf("%d",&l);
	
	for(i=1;i<=l;i++){
		printf("ingresa un numero: ");
		scanf("%d",&vec[i]);
		
	}
	for(i=1;i<=l;i++){
		
		suma=-1*vec[i];
		printf("El vector es: %d\n",suma);
		
	}
	
	
	
	
}

int main() {
	int vec[100];
	vect(vec);
	return 0;
}

