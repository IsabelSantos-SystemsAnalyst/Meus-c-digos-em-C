#include <stdio.h>;
int main (){
	float saldo, nsaldo;
	printf ("Informe o saldo da aplicaçaão:");
	scanf ("%f", &saldo);
	nsaldo = saldo + saldo * 0.01; // 0.01 = 1/100
	printf ("Saldo reajustado: %f\n", nsaldo);
	return 0;	
}
