#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int decision=1;
	int inc=0;
	while(decision==1){
		inc++;
		printf("ejecucion #%d\n", inc);
		printf("si desea continuar presione 1 o cualquier otro para salir");
		scanf("%d", &decision);
	}
	printf("gracias, adios\n");
}

/*
   int decision=1;
	int inc=0;
	do{
	inc++;
		printf("ejecucion #%d\n", inc);
		printf("si desea continuar presione 1 o cualquier otro para salir");
		scanf("%d", &decision);
   {	while(decision==1);
   printf("gracias, adios\n");
}
*/
