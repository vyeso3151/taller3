//taller funciones 
//	punto Nº7
//	hecho por Victor Bruno
//	fecha 24/09/2017

#include <stdio.h>

void maximo(int valor ){
	int c100;
	int c50;
	int c20;
	int c10;
	int c5;
	int c1;
	scanf("%d",&valor);
	
	c100=valor/100;
	valor%=100;
	
	c50=valor/50;
	valor%=50;
		
	c20=valor/20;
	valor%=20;
	
	c10=valor/10;
	valor%=10;
	
	c5=valor/5;
	valor%=5;
	
	c1=valor/1;
	valor%=1;
	
	printf("%d billetes de cien\n",c100);
	printf("%d billetes de cincuenta\n",c50);
	printf("%d billetes de veinte\n",c20);
	printf("%d billetes de diez\n",c10);
	printf("%d billetes de cinco\n",c5);
	printf("%d billetes de 1\n",c1);
	
}

int main() {
	int valor;
	maximo(valor);
	return 0;
}

