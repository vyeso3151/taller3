
//taller funciones 
//	punto Nº5
//	hecho por Victor Bruno
//	fecha 20/09/2017

#include <stdio.h>

void maximo(int n1, int n2, int n3){
	scanf("%d",&n1);
	scanf("%d",&n2);
	scanf("%d",&n3);
	
	if((n1>n2)&&(n1>n3)){
		printf("El numero mayor es: %d",n1);
		
	}
	if((n2>n1)&&(n2>n3)){
		printf("El numero mayor es: %d",n2);
	
	}
	if((n3>n1)&&(n3>n2)){
		printf("El numero mayor es: %d",n3);
	
	}
	
}

int main() {
	int n1,n2,n3;
	maximo(n1,n2,n3);
	return 0;
}

