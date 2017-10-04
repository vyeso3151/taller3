
//taller funciones 
//	punto Nº3
//	hecho por Victor bruno
//	fecha 19/09/2017
#include <stdio.h>

int funpot(int n, int p){
int i,potencia=1;
for (i=0;i<p;i++){
	potencia=potencia*n;
	
	}
return potencia;
	
}

int main() {
	int n,p;
	printf("Ingresa el numero que quieres sacar la potencia: ");
	scanf("%d",&n);
	printf("Ingresala a cuanto lo quiere elevar ");
	scanf("%d",&p);
	printf("%d", funpot(n,p));
	
	;
	
	
	
	return 0;
}

