
//taller funciones 
//	punto Nº6
//	hecho por Victor Bruno
//	fecha 25/09/2017


#include <stdio.h>
int cambio(int &a, int &b);
int main() {
	int n1;
	int n2;
	
	printf("Ingrese los numeros \n");
	scanf("%d",&n1);
	scanf("%d",&n2);
	
	cambio(n1,n2);
	printf(" %d,%d\n",n1,n2);
	return 0;
}
int cambio(int &a, int &b){
	
	a=1;
	b=2;
	return a,b;
}
