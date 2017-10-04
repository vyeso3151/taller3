#include <stdio.h>
//taller funciones 
//	punto Nº8
//	hecho por Victor Bruno
//	fecha 28/09/2017

int tiempo(int totalseg, int &horas, int &minutos, int &segundos);

int main() 
{
	int totalseg;
	int horas;
	int segundos;
	int minutos;
	printf("Ingrese los segundos: \n");
	scanf("%d",&totalseg);
	
	tiempo(totalseg,horas,minutos,segundos);
	
	printf("El tiempo total es: \n %d Horas:%d Minutos:%d Segundos \n",horas,minutos,segundos);
	return 0;
}

int tiempo(int totalseg, int &horas, int &minutos, int &segundos)
{
	int totalmin;
	
	totalmin=totalseg/60;
	segundos=totalseg-(totalmin*60);
	horas=totalmin/60;
	minutos= totalmin-(horas*60);
	
	return horas,minutos,segundos;	
}
