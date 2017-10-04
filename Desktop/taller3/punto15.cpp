
//taller funciones 
//	punto Nº15
//	hecho por Victor Bruno
//	fecha 1/10/2017

#include <stdio.h>


int llmatriz(int matriz[100][100], int f, int c);
int matriz[100][100],f,c;
int main()
{
	int matriz[100][100],f,c;
	llmatriz(matriz,f,c);
	return 0;
}
int llmatriz(int matriz[100][100], int f, int c){
	printf("Ingrese numero de filas \n ");
	scanf("%d",&f);
	printf("Ingrese numero de columnas \n");
	scanf("%d",&c);
	printf("Ingrese elementos de la matriz \n");
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			scanf("%d",&matriz[i][j]);
		}
	}

	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			printf("%d",matriz[i][j]);
		}
		printf("\n");
	}	
}

