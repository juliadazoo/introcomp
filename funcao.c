/*
	Name: Júlia Caroline 
	Date: 26/06/15 08:17
	Description: Funcao
*/

#include<stdio.h>
#include<conio.h>

float salBruto, descontos;
float sal_Liquido(float sBruto, float desc)
{
	float saLiq;
	saLiq = sBruto - desc;
	return saLiq;
}
int main(){
int i;
for (i=0; i<1200; i++)
{
	printf("\nInforme o salário bruto e os descontos do funcionário: ");
	scanf("%f%f",&salBruto,&descontos);
	printf("Salário líquido do funcionário: %0.2f\n",sal_Liquido(salBruto,descontos));
}
getch();
return 0;
}
