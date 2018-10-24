//ATIVIDADE URI - 1064
#include <stdio.h>

main(void){
	float num, soma, media, i;
	int qtd;
	for (i=0; i < 6;i++){
		scanf("%f",&num);
		if (num > 0){
			qtd++;
			soma += num;
		}
	}
	media= soma/qtd;
	printf("%d valores positivos\n",qtd);
	printf("%.1f\n",media);
	
}
