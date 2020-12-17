#include <stdio.h>
main (){
	int numero;
	printf ("Digite um numero ");
	scanf ( "%d", &numero);
	if (((numero % 5) ==0) && ((numero %3 )==0)){
		printf ("o numero e divisivel \n");
	}
	else {
		printf ("O numero nao e divisivel \n");
	}
}
