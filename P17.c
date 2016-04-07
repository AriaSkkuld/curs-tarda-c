#include <stdio.h>
int main(){
	//declara variable
	int num1;
	int residu;
	//calcula el residu
	residu = num1 % 2;
	
	//demanar numero
	printf("Introudeix un nombre sencer\n");
	
	//recollir numero
	scanf("%i", &num1);
	
	//plantejament (si es divisible)
	if ( residu == 0){
	printf("Es parell!");
	}
	
	else{
		printf("Es imparell");
	
	}
			
	
return 0;
}

