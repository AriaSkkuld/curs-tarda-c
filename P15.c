#include <stdio.h>
int main(){
	//declara variable
	char a;
	
	//demanar lletra
	printf("Introudeix una lletra en Maj�scula o minu�sculs\n");
	
	//recollir lletra
	scanf("%C", &a);
	
	
	//plantejament
	if ( a >= 65  && a <= 90 ){
		//s�
		printf("L'has escrit en majuscula!\n");
	}
		else{
			if (  a >= 97 && a <= 122){
			printf("L'has escrit en minuscula\n");
			
		}
			else{
			printf("No �s una lletra!");
			}
	}
return 0;
}

