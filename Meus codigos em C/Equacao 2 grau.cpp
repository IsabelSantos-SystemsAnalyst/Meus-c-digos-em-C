#include <stdio.h>
#include <math.h>
main (){
	float a, b, c, delta, x1, x2;
	printf("entre com o valor de a ");
	scanf ( "%f",&a);
	printf ("entre com o valor de b ");
	scanf ("%f",&b);
	printf ("entre com o valor de c ");
	scanf ("%f",&c);
	
	delta = (pow(b,2) - 4* a *c);
	x1 = (-b + sqrt (delta))/ (2 * a);
	x2 = (-b - sqrt (delta))/ (2 * a);
	
	if (delta == 0){
		printf ("raiz unica\n");
		printf ("x1 = %.2f\n",x1);
	}
	else {
		if (delta < 0 ){
			printf ("raizes imaginarias\n");
			}
			
			else {
				if (delta > 0){
					printf ("raizes distintas\n");
					printf ("x1 = %2.f\n", x1);
					printf ("x2 = %.2f\n", x2);
				}
			}
	}
	

}
	

