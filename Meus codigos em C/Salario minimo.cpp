#include <stdio.h>
int main (){
	float salarioMin, salarioPessoa, qtdeSalario;
	printf ("Informe o valor do salario minimo: ");
	scanf ("%f",&salarioMin);
	printf ("Informe o valor do salario minimo da pessoa: ");
	scanf ("%f",&salarioPessoa);
	qtdeSalario = salarioPessoa / salarioMin;
	printf ("Esta pessoa recebe %f salario minimo", qtdeSalario);
	
}

