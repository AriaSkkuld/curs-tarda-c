#include<stdio.h>
int main(){
//demanar i iniciar array
int i, mit, volta, petit, gran;
int numeros[]={3, 4, 2, 8, 6, 5};
int suma=0;

//la SUMA:	
	for(i=0;i<=5;i++){
	suma=suma+numeros[i];
	//contar les voltes que dona per despres la mitjana
	volta++;
	}
	printf("La SUMA és: %i\n",suma);
//la MITJANA: 
	mit=suma/volta;
	printf("%i entre %i voltes per tant, la MITJANA és %i\n",suma,volta,mit);
	
//El num més petit:
	petit = numeros[0];
	for(i=0;i<=5;i++){
	if (petit > numeros[i]){
		petit = numeros[i];
	}
}
	printf("El numero mes petit és %i\n",petit);

//El num més gran:
	gran = numeros[0];
	for(i=0;i<=5;i++){
	if (gran < numeros[i]){
		gran = numeros[i];
	}
}
	printf("El numero mes gran és %i\n",gran);
return 0;

}
