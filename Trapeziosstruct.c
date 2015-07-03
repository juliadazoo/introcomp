/*
	Name: Júlia Caroline 
	Date: 26/06/15 08:04
	Description: Estrutura - Registro
*/

#include<stdio.h>
#include<conio.h>

int main () {
	struct dados_trapezio{
		int codigo;
		float basema, baseme, altra, area;
	};
	struct dados trapezio Trapezios[20];
	int i;
	for(i=0;i<20;i++){
		printf("Informe o codigo do trapezio:");
		scanf("%d",&Trapezios[i].codigo);
		printf("Informe o valor da base maior do trapezio:");
		scanf("%f",&Trapezios[i]].basema);
		printf("Informe o valor da base menor do trapezio:");
		scanf("%f",&Trapezios[i].baseme);
		printf("Informe a altura do trapezio:");
		scanf("%f",&Trapezios[i].altra);
		Trapezios[i].area=Trapezios[i].altra(Trapezios[i].basema+Trapezios[i].baseme)/2;
		printf("\n");
		}
		for(i=0;i<20;i++){
			printf("O codigo e:%d",Trapezios[i],codigo);
			printf("A area e:%f", Trapezios[i].area);
			printf("\n");
		}
getch();
return 0;
}
