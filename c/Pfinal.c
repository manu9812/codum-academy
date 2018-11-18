#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//esta es una tienda
 
 
char opcion[8];
int gorras;
int termos;
int playeras;
int tazas;
int total_tazas=0;
int total_playeras=0;
int total_termos=0,
int total_gorras=0;
int seguirComprando= 1;

void main() {
	while(seguirComprando ==1){
	
		printf("elige el producto que buscas\n");
		printf("ingrese gorra para comprar una \n");
		printf("ingrese termo para comprar uno \n");
		printf("ingrese playera para comprar una \n");
		printf("ingrese taza para comprar una \n");
		
		scanf("%s", opcion);
		if(strcmp(opcion, "gorra")==0)
		{
			printf("cada gorra cuesta 5 dolares, cuantas deseas\n");
			scanf(" %d", &gorras);
			total_gorras= total_gorras+ (gorras*5);
			printf("su precio total de gorras es: %d \n", total_gorras);
		}
		else if(strcmp(opcion,"termo")==0)
		{
			
			printf("cada termo cuesta 4 dolares, cuantas deseas\n");
			scanf(" %d", &termos);
			total_termos= total_termos+ (termos*4);
			printf("su precio total de termos es: %d \n", total_termos);
		
		}
		else if(strcmp(opcion, "playera")==0)
		{
		printf("cada playera cuesta 10 dolares, cuantas deseas\n");
			scanf(" %d", &playeras);
			total_playeras= total_playeras+ (playeras*10);
			printf("su precio total de playeras es: %d \n", total_playeras);
		}
		else if(strcmp(opcion, "taza")==0)
		{
		printf("cada taza cuesta 3 dolares, cuantas deseas\n");
			scanf(" %d", &tazas);
			total_tazas= total_tazas+ (tazas*3);
			printf("su precio total de tazas es: %d \n", total_tazas);
		}
		else

		printf("el producto especificado no existe, prueba otra opcion\n");
		printf("en caso de querer otro producto presione 1,para salir presione cualquier numero\n");
		scanf("%d", &seguirComprando);
	}
}
