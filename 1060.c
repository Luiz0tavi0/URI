//ATIVIDADE URI - 1060
#include <stdio.h>

main(void){
	double num;
	int contador, positivos= 0;
	
	do{
		scanf("%lf",&num);
		if (num > 0)
			positivos++;
		contador++;
	}while(contador < 6);
	printf("%d valores positivos\n", positivos);
		
}
