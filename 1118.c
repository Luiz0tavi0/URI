//ATIVIDADE URI - 1118
#include<stdio.h>
main(void){
	double n1= -1, n2= -1;
	int x;
	do{
		scanf("%lf", &n1);
		while(n1 < 0 || n1 > 10){
			printf("nota invalida\n");
			scanf("%lf", &n1);
		}
		scanf("%lf", &n2);
		while(n2 < 0 || n2 > 10){
			printf("nota invalida\n");
			scanf("%lf", &n2);
		}
		printf("media = %.2f\n", ((n1 + n2)/2));
		do{
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d", &x);
		}while(x < 1 || x > 2);
		
	}while(x != 2);
}
