#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	char userName[25];
	int decision;
	
	printf("bienvenidos a mi programa\n");
	printf("ingresa tu nombre de usuario\n");
	scanf("%s", userName);
	printf("bienvenido %s , vamos a accerder a tu seccion\n", userName);
	
	if (strcmp(userName,"julian")==0){
		printf("Esto es una version gratuita, que deseas hacer?\n");
		printf("ingrese q para estudiar,\n 2 para leer el blog\n y cualquier otro valor para salir\n");
		scanf("%d", &decision);
		if(decision==1)
			printf("estas en la seccion de estudio, saca el maximo provecho\n");
		else if(decision ==2)
			prinf("estas en el blog, aprovechalo\n");
		else
			printf("good bye\n");
		}
	else if(strcmp(userName,"juliana")==0){
		printf("Esto es una version gratuita, que deseas hacer?\n");
		printf("ingrese q para estudiar,\n 2 para leer el blog\n y cualquier otro valor para salir\n");
		scanf("%d", &decision);
		if(decision==1)
			printf("estas en la seccion de estudio, saca el maximo provecho\n");
		else if(decision ==2)
			prinf("estas en el blog, aprovechalo\n");
		else
			printf("good bye\n");
		}
	else if(strcmp(userName,"paola")==0){
		printf("Esto es una version premium, que deseas hacer?\n");
		printf("ingrese q para estudiar,\n 2 para leer el blog, \n mentoria\n y cualquier otro valor para salir\n");
		scanf("%d", &decision);
		if(decision==1)
			printf("estas en la seccion de estudio, saca el maximo provecho\n");
		else if(decision ==2)
			prinf("estas en el blog, aprovechalo\n");
			
		else if(decision==3)
			printf("estas en la sesion de mentorias");
		
		else
			printf("good bye\n");
	}
	else
	printf("usted no esta registrado\n");	
}

