#include<stdio.h>
int main(){
	int numero;
	int volta=1;
	int suma,media;
	//demanar un numero
	printf("Escriu un numero: ");
	scanf("%i",&numero);
	suma = numero;
	//mentre num no sigui 0
	while (numero != 0){
		//demana m�s numeros
	printf("Escriu un numero: ");
	scanf("%i",&numero);
		//ves sumant numeros per treure la mitjana
	suma = suma+numero;
		//conta les voltes que fa	
	volta++;
	}
	media = suma/volta;
	printf("�s la volta: %ii la mitjana �s %i",volta,media);
	
	
	return 0;
}
