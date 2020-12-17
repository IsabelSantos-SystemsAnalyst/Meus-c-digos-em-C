#include <stdio.h>
main (){
	int numero, i, contresto = 0;
	printf ("Digite um nuemro: ");
	scanf ("%d", &numero);
	
	for (i = 1 ; i <= numero; i++){
		if ( numero % i == 0 ){
			contresto++;
		}
	}
	if ( contresto == 2){
		printf ("Numero e primo.");
		}else{
			printf ("Numero nao e primo.");
		}
		
	}

