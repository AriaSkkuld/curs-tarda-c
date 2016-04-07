#include <stdio.h>
int main(){
	//declara variable
	int a;
	int b;
	
	//demanar numero
	printf("Demana numero 1\n");
	scanf("%i", &a);
	printf("Demana numero 2\n");
	scanf("%i", &b);
	
	//plantejament
	if ( a > b){
		//sí
		printf("El numero més gran és: %i\n",a);
	}
		else{
			//no
			printf("%i\n",b);
		}
	system ("PAUSE");
return 0;	
}

