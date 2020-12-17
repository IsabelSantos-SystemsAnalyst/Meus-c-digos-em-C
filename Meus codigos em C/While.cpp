#include<stdio.h>
main (){

int i=1, n, soma=0;
printf ("Digite um numero n: ");
scanf("%d", &n);
while (i <= n) {
	soma += i;
	i++;
}
printf ("Soma: %d \n", soma);
}
