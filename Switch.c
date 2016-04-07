#include<stdio.h>
int main(){
	char lletra;
	lletra = 'e';
	//dir si és una vocal o no
	switch(lletra){
		case 'a':
			printf("Es vocal(a)");
			break;
		case 'e':
			printf("Es vocal(e)");
			break;
		case 'i':
			printf("Es vocal(i)");
			break;
		case 'o':
			printf("Es vocal(o)");
			break;
		case 'u':
			printf("Es vocal(u)");
			break;

		default:
			printf("No es vocal");
	}
	
	return 0;
}
