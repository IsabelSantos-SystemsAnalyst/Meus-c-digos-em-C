#include <stdio.h>
int main (){
	int num1, num2;
	printf ("Forneça dois números inteiros:");
	scanf ("%d", &num1);
	scanf ("%d", &num2);
	printf ("Soma: %d\n", num1 + num2);
	printf ("Multiplicação: %d\n", num1 * num2);
	printf ("Divisão: %f\n", (double) num1 / num2);
	printf ("Resto da Divisão Inteira: %d\n", num1 % num2);
	return 0;
}
