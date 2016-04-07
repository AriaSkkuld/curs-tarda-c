#include <stdio.h>
int main(){
	//declara variable
	char a;
	
	//demanar lletra
	printf("Introudeix una lletra en Majúscula o minuúsculs\n");
	
	//recollir lletra
	scanf("%C", &a);
	
	
	//plantejament
	if ( a >= 65  && a <= 90 ){
		//sí
		printf("L'has escrit en majuscula!\n");
	}
		else{
			if (  a >= 97 && a <= 122){
			printf("L'has escrit en minuscula\n");
			
		}
			else{
			printf("No és una lletra!");
			}
	}
return 0;
}

