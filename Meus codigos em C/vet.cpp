#include <stdio.h>
main (){
	int numero,i = 0 , temp
	while (i<5){
		temp=vet[i];
		vet[i]= vet [9-i];
		vet[9-i] = temp;
		i=i +1
	}
}
