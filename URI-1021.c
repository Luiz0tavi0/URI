/*ATIVIDADE URI-1021*/
#include <stdio.h>
int main(){
	float valor;
	int n100, n50, n20, n10, n5, n2;
	int m1, m50, m25, m10, m5, m01;
	n100 = n50 = n20 = n10 = n5 = n2 =0;
	m1 = m50 = m25 = m10 = m5 = m01 = 0;
	
	scanf("%f",&valor);
	
	while(valor >= 100){	
		n100++;
		valor-=100;
	}
	while(valor >= 50){	
		n50++;
		valor-=50;
	}
	while(valor >= 20){	
		n20++;
		valor-=20;
	}
	while(valor >= 10){	
		n10++;
		valor-=10;
	}	
	while(valor >= 5){	
		n5++;
		valor-=5;
	}
	while(valor >= 2){	
		n2++;
		valor-=2;
	}
	while(valor >= 1.00){	
		m1++;
		valor-=1.00;
	}
	while(valor >= 0.50){	
		m50++;
		valor-=0.50;
	}
	while(valor >= 0.25){	
		m25++;
		valor-=0.25;
	}
	while(valor >= 0.10){	
		m10++;
		valor-=0.10;
	}	
	while(valor >= 0.05){	
		m5++;
		valor-=0.05;
	}	
	while(valor >= 0.01){	
		m01++;
		valor-=0.01;
	}
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n",n100);
	printf("%d nota(s) de R$ 50.00\n",n50);
	printf("%d nota(s) de R$ 20.00\n",n20);
	printf("%d nota(s) de R$ 10.00\n",n10);
	printf("%d nota(s) de R$ 5.00\n",n5);
	printf("%d nota(s) de R$ 2.00\n",n2);
	
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n",m1);
	printf("%d moeda(s) de R$ 0.50\n",m50);
	printf("%d moeda(s) de R$ 0.25\n",m25);
	printf("%d moeda(s) de R$ 0.10\n",m10);
	printf("%d moeda(s) de R$ 0.05\n",m5);
	printf("%d moeda(s) de R$ 0.01\n",m01);
}
