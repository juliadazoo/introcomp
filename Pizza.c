/*
	Name: J�lia Caroline
	Disciplina: Introdu��o � Computa��o
	Conte�do: Estrutura Registro
	Date: 25/06/15 18:24
	Description: Estudos para avalia��o semestral
	
#   Declarar uma estrutura registro denominada dados_pizza com os seguintes campos: codigo (tipo inteiro),
	nome (uma palavra com o m�ximo de 15 caracteres), raio, diametro (corresponde ao di�metro da pizza),
	peso e preco (corresponde ao pre�o da pizza).

# 	Declarar um vetor denominado Pizza do tipo dados_pizza para armazenar os dados de 35 pizzas.

# 	Preencher o vetor Pizza declarado na quest�o anterior. O campo diametro dever� ser calculado a partir
	do campo raio.

# 	Exibir os campos codigo, diametro e preco atualizado de cada pizza. Considere que, a atualiza��o do
	campo preco ser� aplicando um desconto de 7,5% sobre o pre�o original da pizza. 
*/

#include<stdio.h>
#include<conio.h>

int main(){
	struct dados_pizza {
	int codigo;
	char nome[15];
	float raio, diametro, peso, preco;

};
	struct dados_pizza Pizza[3];
	int i;
	for (i=0; i<3; i++)
	{
		printf("Informe o c�digo da pizza: ");
		scanf("%d",&Pizza[i].codigo);
		printf("Informe o nome da pizza: ");
		scanf("%s",&Pizza[i].nome);
		printf("Informe o raio da pizza: ");
		scanf("%f",&Pizza[i].raio);
		printf("Informe o peso da pizza: ");
		scanf("%f",&Pizza[i].peso);
		printf("Informe o pre�o da pizza: ");
		scanf("%f",&Pizza[i].preco);
		Pizza[i].diametro = Pizza[i].raio * 2 ;
		printf("\n");
}
for (i=0; i<3; i++)
{
printf("Codigo da pizza: %d", Pizza[i].codigo);
printf("Di�metro da pizza: %f", Pizza[i].diametro);
printf("Pre�o da pizza: %f", Pizza[i].preco);
printf("\n");
}
getch ();
return 0;
}

