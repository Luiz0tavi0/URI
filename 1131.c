//ATIVIDADE URI - 1131
#include <stdio.h>

main(void){
	unsigned int  n_jogos, gol_Inter, gol_Gremio, resp, ganhaInter, ganhaGremio, empate;
	n_jogos= 0; gol_Inter= 0; gol_Gremio= 0; resp= 0; ganhaInter= 0; ganhaGremio= 0;empate= 0;	
	do{
		scanf("%u %u", &gol_Inter, &gol_Gremio);
		n_jogos++;
		if (gol_Inter == gol_Gremio)
				empate++;
		if (gol_Inter < gol_Gremio)
				ganhaGremio++;
		if (gol_Inter > gol_Gremio)
				ganhaInter++;
		
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%u", &resp);
	}while(resp == 1);
	
	printf("%u grenais\n", n_jogos);
	printf("Inter:%u\n", ganhaInter);
	printf("Gremio:%u\n", ganhaGremio);
	printf("Empates:%u\n", empate);
	
	if (ganhaInter > ganhaGremio)
		printf("Inter venceu mais\n");
	else
		printf("Gremio venceu mais\n");
}
