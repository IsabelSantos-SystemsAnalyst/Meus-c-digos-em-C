#include <stdio.h>
int main () {
	float espaco, tempo,vm ;
	printf ("Informe o espa�o percorrido : ") ;
	scanf ("%f",&espaco);
	printf ("Informe o tempo gasto:");
	scanf ("%f", &tempo);
	vm= espaco / tempo;
	printf ("Velocidade M�dia %f km/h", vm );
	return 0;
}
