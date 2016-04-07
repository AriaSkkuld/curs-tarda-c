#include <stdio.h>
int main(){
	//declara variable
	int equip1;
	int equip2;
	//demanar numero
	printf("Introudeix el resultat del partit, equip 1:\n");
	//recollir numero
	scanf("%i", &equip1);
	
	//demanar resultat equip2
	printf("Equip 2:\n");
	//recollir numero
	scanf("%i", &equip2);
	
	
	if ( equip1>equip2){
	printf("El guanyador és Equip 1 amb %i punts\n",equip1);
	}
	if (equip1<equip2){
	printf("El guanyador és Equip 2 amb %i punts\n",equip2);
	}
	if ( equip1==equip2){
	printf("EMPAT!");
	}
	if (equip1 > equip2 + 3 || equip2 > equip1+3){
		printf("Guanyat de molt");
	}
	
return 0;
}
