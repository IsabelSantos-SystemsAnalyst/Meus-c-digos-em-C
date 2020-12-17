#include <stdio.h>
main (){
	float prestacao,valor,taxa;
	int tempo;
	printf ("Informe o valor do produto (R$): ");
	scanf ("%f",&valor);
	printf ("Informe a taxa de juros (%): ");
	scanf ("%f",&taxa);
	printf ("Informe o tempo de atraso (meses): " );
	scanf ("%d",&tempo);
	prestacao = valor + (valor * (taxa / 100) * tempo);
	printf ("Valor da prestação em atraso (R$): %.2f", prestacao);
	return 0;
}
