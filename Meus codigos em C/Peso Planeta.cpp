#include <stdio.h>

main(){
	float pesoTerra, pesoPlaneta = 0;
	int numPlaneta;
	printf ("Infome o peso na terra: \n");
	scanf ("%f", &pesoTerra);
	printf ("Informe o numero do planeta conforme a tabela: \n");
	printf("1-Mercurio\t 2-Venus\t 3-Marte\n");
	printf ("4-Juptiter\t 5-Saturno\t 6-Urano\n");
	scanf ("%d", &numPlaneta);
	switch (numPlaneta) {
		case1:
			pesoPlaneta = (pesoTerra / 10)* 0.37;
			break ;
			case2:
				pesoPlaneta = (pesoTerra / 10) * 0.88;
				break;
				case3:
					pesoPlaneta = (pesoTerra / 10) * 0.38;
					break;
					case4: 
					pesoPlaneta = (pesoTerra /10)* 2.64;
					break;
					case5:
						pesoPlaneta = (pesoTerra /10) *1.15;
						break;
						case6:
							pesoPlaneta = (pesoTerra /10)* 1.17;
							break;
							default:
								printf ("Planeta invalido!\n");
		}
printf ("Peso no Planeta escolhido : %f\n", pesoPlaneta);		
}
