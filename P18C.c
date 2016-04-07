#include <stdio.h>
int main(){
	//declara variable
	int num1;
	//demanar numero
	printf("Introudeix un nombre de 1 a 12, representant els messos de l'any'\n");
	
	//recollir numero
	scanf("%i", &num1);
	
	
	if ( num1 <=3){
	printf("Hivern");
	}
	if (num1 >3 && num1 <=6){
		printf("Es primavera!");
	}
	if ( num1 > 6 && num1 <=9){
	printf("ESTIIIUUU");
	}
	if (num1 >9 && num1 <=12){
		printf("Tardoor");
	}
			
	
return 0;
}
