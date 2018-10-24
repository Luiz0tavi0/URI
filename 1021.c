//ATIVIDADE URI - 1021
#include <stdio.h>
main(void) {
	double N;
	int n100, n50, n20, n10, n5, n2, m1r, m50, m25, m10, m5, m1, n;
	scanf("%lf", &N);
	n = N;
	N -= n;

	n100 = n / 100;
	n %= 100;
	n50 = n / 50;
	n %= 50;
	n20 = n / 20;
	n %= 20;
	n10 = n / 10;
	n %= 10;
	n5 = n / 5;
	n %= 5;

	n2 = n / 2;
	m1r = n % 2;
	
	n = N * 100;
	m50 = n / 50;
	n %= 50;
	m25 = n / 25;
	n %= 25;
	m10 = n / 10;
	n %= 10;
	m5 = n / 5;
	m1 = n % 5;
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n",n100);
	printf("%d nota(s) de R$ 50.00\n",n50);
	printf("%d nota(s) de R$ 20.00\n",n20);
	printf("%d nota(s) de R$ 10.00\n",n10);
	printf("%d nota(s) de R$ 5.00\n",n5);
	printf("%d nota(s) de R$ 2.00\n",n2);
	
	printf("MOEDAS:\n");
		
	printf("%d moeda(s) de R$ 1.00\n",m1r);
	printf("%d moeda(s) de R$ 0.50\n",m50);
	printf("%d moeda(s) de R$ 0.25\n",m25);
	printf("%d moeda(s) de R$ 0.10\n",m10);
	printf("%d moeda(s) de R$ 0.05\n",m5);
	printf("%d moeda(s) de R$ 0.01\n",m1);

}
