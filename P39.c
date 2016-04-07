#include<stdio.h>
int main(){
	int numero,i;
	int gran = 0;
	
//Fer un bucle per demanar 5 numeros
for(i=0;i< 5;i++){
	//demanar numero
	printf("Introdueix un numero: ");
	scanf("%i", &numero);
	//si es mes gran
	if(numero>gran){
		gran=numero;
	}
}
printf("El numero més gran és: %i",gran);
return 0;
}
