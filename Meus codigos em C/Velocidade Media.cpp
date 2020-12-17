#include <stdio.h>
int main () {
	float espaco, tempo,vm ;
	printf ("Informe o espaço percorrido : ") ;
	scanf ("%f",&espaco);
	printf ("Informe o tempo gasto:");
	scanf ("%f", &tempo);
	vm= espaco / tempo;
	printf ("Velocidade Média %f km/h", vm );
	return 0;
}
