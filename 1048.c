//ATIVIDADE URI - 1048
#include <stdio.h>

main(void){
	double sal, reaj_perc;
	scanf("%lf", &sal);
	
	if (sal > 2000)
		reaj_perc= 4;
	else if (sal > 1200)
		reaj_perc= 7;
	else if (sal > 800)
		reaj_perc= 10;
	else if (sal > 400)
		reaj_perc= 12;
	else if (sal > 0)
		reaj_perc= 15;
	printf("Novo salario: %.2lf\n",(1+(reaj_perc/100))*sal);
	printf("Reajuste ganho: %.2lf\n",(reaj_perc*sal/100));
	printf("Em percentual: %.0lf %%\n",reaj_perc);
}
	
