#include <stdio.h>
int main(){
	//declara variable
	int num1;
	//demanar numero
	printf("Introudeix un nombre de l'1 al 7, posant que 1 �s dilluns i 7 diumenge'\n");
	
	//recollir numero
	scanf("%i", &num1);
	
	
	if ( num1 <=5){
	printf("NO es cap de setmana!");
	}
	if (num1 >5 && num1){
		printf("�s cap de setmana!");
	}
			
	
return 0;
}
