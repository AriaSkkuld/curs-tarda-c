#include<stdio.h>
int main(){
	int numeros[5],i;
	int suma=0;
//demana 5 numeros
	for (i= 0 ; i<5;i++){
		printf("Escriu un numero: ");
		scanf("%i",&numeros[i]);
	}
	printf("\n");	
//mostra els numeros
	printf("Els nombres introduits amb ordre s�n:\n");
	for(i=0;i<5;i++){
	printf("Num:%i\n",numeros[i]);
	}
	printf("\n");
//mostra els numeros del rev�s
	printf("Els nombres amb ordre invers s�n:\n");
	for(i=4;i>=0;i--){
	printf("Num:%i\n",numeros[i]);
	}
//fes la suma
	for(i=0;i<5;i++){
	suma=suma+numeros[i];
	}
	printf("\n");
//mostra la suma dels numeros
	printf("La suma dels nombres �s:%i\n",suma);


return 0;	
}
