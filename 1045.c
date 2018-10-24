/*ATIVIDADE URI - 1045*/
#include <stdio.h>
#define quad(x) ((x)*(x))

main(void){
	double a, b, c, a2, b2, c2;
	scanf("%lf %lf %lf", &a, &b, &c);
	
	if (a < b){
		a2= a;
		a= b;
		b= a2;
	}
	if(a < c){
		c2= a;
		a= c;
		c= c2;
	}
	a2= quad(a); b2= quad(b); c2= quad(c);
	
	if (a >= (b + c)){
		printf("NAO FORMA TRIANGULO\n");
	}else{
		if (a2 == (b2 + c2)){
			printf("TRIANGULO RETANGULO\n");
		}else{
			if (a2 > (b2 + c2)){
				printf("TRIANGULO OBTUSANGULO\n");
			}else{
				if(a2 < (b2 + c2)){
					printf("TRIANGULO ACUTANGULO\n");
				}
			}
		}
	}
	if (a == b && b == c && a == c)
		printf("TRIANGULO EQUILATERO\n");
	else {
		if (a == b || b == c || a == c)
			printf("TRIANGULO ISOSCELES\n");
	}
}

