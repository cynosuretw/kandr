#include<stdio.h>
#include <math.h>

	int main()
	{
		int m,s,r, Q, p;
		float f;
		printf("Insira o valor de m:\n");
		scanf("%d", &m);
		printf("Insira o valor de s\n");
		scanf("%d", &s);
		printf("Insira o valor de Q\n");
		scanf("%d", &Q);
		if(Q>m){
			printf("Erro, \"Q\" maior que \"m\"! Encerrando\n");
			system("pause"); 
			return 0;
		}
		f = (float)Q/s;
		int intpart = (int)f;
		double decpart = f - intpart;
		if(decpart==0){
			printf("p = %d, q = %d", intpart, s);
		}
		else{
			printf("p = %d, q = %d \n", intpart + 1,(int) round(decpart *s));
		}
		system("pause");  
		return 0;
	}
