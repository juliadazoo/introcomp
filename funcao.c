/*
	Name: J�lia Caroline 
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
	printf("\nInforme o sal�rio bruto e os descontos do funcion�rio: ");
	scanf("%f%f",&salBruto,&descontos);
	printf("Sal�rio l�quido do funcion�rio: %0.2f\n",sal_Liquido(salBruto,descontos));
}
getch();
return 0;
}
