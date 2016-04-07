#include <stdio.h>
int main(){
	//declara variable
	int num1;
	int num2;
	int residu;
	
	//demanar num1
	printf("Introdueix numero 1\n");
	//recollir num1
	scanf("%i", &num1);
	
	//demanar num2
	printf("Introdueix numero 2\n");
	//recollir num2
	scanf("%i", &num2);
	
	//calcula el residu
	residu = num1 % num2;
	
	
	//plantejament (si es divisible)
	if (residu == 0){
		//sí
		printf("Es divisible\n");
	}
	else{
		printf("No és divisible!");
			
	}
return 0;
}

