/*ATIVIDADE URI - 1046*/
#include<stdio.h>

main(void){
	int inicio, fim, duracao;
	scanf("%d %d", &inicio, &fim);
	
	if(inicio > fim)
		duracao= ((24-inicio) + fim);
	else if(inicio == fim)
		duracao= 24;
	else if(inicio < fim)
		duracao= (fim - inicio);
	printf("O JOGO DUROU %d HORA(S)\n", duracao);
}
