#include <stdio.h>
int main (){
	int num1, num2;
	printf ("Forne�a dois n�meros inteiros:");
	scanf ("%d", &num1);
	scanf ("%d", &num2);
	printf ("Soma: %d\n", num1 + num2);
	printf ("Multiplica��o: %d\n", num1 * num2);
	printf ("Divis�o: %f\n", (double) num1 / num2);
	printf ("Resto da Divis�o Inteira: %d\n", num1 % num2);
	return 0;
}
