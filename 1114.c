//ATIVIDADE URI 1114
#include <stdio.h>
#define senha 2002
main(void){
	int userPass;
	while(scanf("%d", &userPass)){
		if (userPass != senha)
			printf("Senha Invalida\n");
		else 	
			break;
	}
	printf("Acesso Permitido\n");
}
