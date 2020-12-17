#include <stdio.h>
main (){
	float precoFabrica, precoImpostos, percVendedor, valorAutomovel;
	printf ("Informe o preço de fabrica do automovel: ");
	scanf ("%f", &precoFabrica);
	precoImpostos = precoFabrica * 45/100;
	percVendedor = precoFabrica * 28/100;
	valorAutomovel = precoFabrica + precoImpostos + percVendedor;
	printf ("Preço do Automovel (R$): %f", valorAutomovel);
}
