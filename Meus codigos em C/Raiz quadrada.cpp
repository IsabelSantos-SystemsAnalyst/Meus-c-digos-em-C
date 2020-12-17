#include <stdio.h>
#include <math.h>
main (){
	float a,b,c, delta, x1,x2;
	printf ("Digite o valor de a ");
	scanf ("%f",&a);
	printf ("Digite o valor de b ");
	scanf ("%f",&b);
	printf ("Digite o valor de c ");
	scanf ("%f", &c);
	delta = ( pow (b,2) - 4 * a *c);
	x1 = ( - b + sqrt (delta)) /( 2 * a);
	x2 = ( - b - sqrt (delta)) / ( 2 *a);
	
	if (delta == 0 ) {
		printf ("Raiz Unica \n");
		printf ("x1= %2.f\n", x1);
	}
	else {
		if ( delta < 0){
			printf ("Raizes Imaginarias\n");
		}
		else {
			printf ("Raizes Distintas \n");
			printf ("x1 = %2.f\n", x1);
			printf ("x2 = %2.f\n", x2);
		}
	}
	
}
