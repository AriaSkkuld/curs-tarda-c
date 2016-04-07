#include <stdio.h>
int main(){
	//declara variable
	int a;
	
	//demanar numero
	printf("Escriu la teva edat\n");
	
	//recollir numero
	scanf("%i", &a);
	
	
	//plantejament
	if ( a > 18){
		//sí
		printf("Ets major d'edat!'\n");
	}
		else{
			//no
			printf("Ets menor.\n");
		}
	system ("PAUSE");
return 0;	
}

