/*ATIVIDADE URI - 1038*/
#include<stdio.h>

main(void){
	int cod, qtd;
	float pTotal;
	
	scanf("%d %d", &cod, &qtd);
	
	switch(cod){
		case 1: pTotal= 4; break;
		case 2: pTotal= 4.5; break;
		case 3: pTotal= 5; break;
		case 4: pTotal= 2; break;
		case 5: pTotal= 1.5;
		
	}
	pTotal *= qtd;
	printf("Total: R$ %.2f\n",pTotal);
}
