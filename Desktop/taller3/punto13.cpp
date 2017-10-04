
//taller funciones 
//	punto Nº13
//	hecho por Victor Bruno
//	fecha 26/09/2017

#include <stdio.h>

void vect(int vec[]){
	int l,i,n;
	;
	
	printf("Ingresa la longitud del vector.");
	scanf("%d",&l);
	
	for(i=1;i<=l;i++){
		printf("ingresa un numero: ");
		scanf("%d",&vec[i]);
		
	}
	for(i=1;i<=l;i++){
		if (vec[i]%2==1){
		printf("Los numeros impares del vector son: %d\n",vec[i]);
		}
		
	}
	
	
	
	
}

int main() {
	int vec[100];
	vect(vec);
	return 0;
}

