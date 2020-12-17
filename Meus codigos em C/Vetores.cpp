#include<stdio.h>
#include<conio.h>
#include<string.h>
main (){
	float P1 [6], P2[6], media [6];
	char nome [6][30], situacao [6][50];
	int x,y=1;
	for(x=0; x<2;x++){
		printf ("Informe o nome %d",x+1);
		scanf ("%s",&nome [x]);
		printf ("Informe nota %d do aluno %s:", y, nome [x]);
		scanf ("%f",&P1 [x]);
		y++;
		printf ("Informe nota %d do aluno %s: ",y,nome [x]);
		scanf ("%f",&P2[x]);
		y=1;
	}
	for (x=0;x<2;x++){
		media [x]=(P1[x]+ P2[x]/2);
		if (media [x]>6);
		
		strcpy (situacao [x], "Aprovado!");
		
	else {
	
		strcpy ( situacao [x]," Reprovado, Ate o proximo ano!");
	}
	
}
