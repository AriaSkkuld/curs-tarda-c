#include <stdio.h>
int main(){
	//declara variable
	int a;
	
	//demanar numero
	printf("Escriu la teva edat\n");
	
	//recollir numero
	scanf("%i", &a);
	
	
	//plantejament
	if ( a >= 10  && a <= 20){
		//s�
		printf("Est� entre el 10 i el 20\n");
	}
		else{
			//no
			printf("no est� entre el 10 i el 20\n");
		}
	system ("PAUSE");
return 0;	
}

