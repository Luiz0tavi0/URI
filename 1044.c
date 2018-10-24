/*ATIVIDADE URI - 1044*/
#include<stdio.h>

main(void){
	int a, b;
	scanf("%d %d", &a, &b);
	if(a % b && b % a )
		printf("Nao sao Multiplos\n");
	else
		printf("Sao Multiplos\n");
}
