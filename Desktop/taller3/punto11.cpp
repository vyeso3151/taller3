#include <stdio.h>
//taller funciones 
//	punto Nº11
//	hecho por Victor Bruno
//	fecha 29/09/2017

int orden(int vec[],int l);
int vec[100],l;

int main() 
{
	printf("Ingrese longitud: ");
	scanf("%d",&l);
	
	printf("Ingrese elementos: ");
	for (int i=0;i<l;i++){
		scanf("%d",&vec[i]);
	}
	orden(vec,l);
	return 0;
}
int orden(int vec[],int l){	
	bool verdad;
	for(int i=0;i<l;i++){
		if (vec[i]>vec[i+1]){
			verdad=true;
			vec++;
		}else{
			verdad=false;
		}		
	}
	if(verdad==true){
		printf("El vector esta en orden crecientemente \n");
	}
	if(verdad==false){			
		printf("El vector NO esta en orden crecientemente \n");
	}
}
