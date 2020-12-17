#include <stdio.h>
main (){
	float A,B,AUX;
	printf ("Informe o valor de A: ");
	scanf ("%f",&A);
	printf ("Informe o valor de B: ");
	scanf ("%f",&B);
	AUX = A;
	A = B;
	B = AUX;
	printf ("A = %.0f\n", A);
	printf ("B = %.0f\n", B);
}
