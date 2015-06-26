/*
	Name: Júlia Caroline
	Disciplina: Introdução à Computação
	Conteúdo: Estrutura Registro
	Date: 25/06/15 18:24
	Description: Estudos para avaliação semestral
	
#   Declarar uma estrutura registro denominada dados_pizza com os seguintes campos: codigo (tipo inteiro),
	nome (uma palavra com o máximo de 15 caracteres), raio, diametro (corresponde ao diâmetro da pizza),
	peso e preco (corresponde ao preço da pizza).

# 	Declarar um vetor denominado Pizza do tipo dados_pizza para armazenar os dados de 35 pizzas.

# 	Preencher o vetor Pizza declarado na questão anterior. O campo diametro deverá ser calculado a partir
	do campo raio.

# 	Exibir os campos codigo, diametro e preco atualizado de cada pizza. Considere que, a atualização do
	campo preco será aplicando um desconto de 7,5% sobre o preço original da pizza. 
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
		printf("Informe o código da pizza: ");
		scanf("%d",&Pizza[i].codigo);
		printf("Informe o nome da pizza: ");
		scanf("%s",&Pizza[i].nome);
		printf("Informe o raio da pizza: ");
		scanf("%f",&Pizza[i].raio);
		printf("Informe o peso da pizza: ");
		scanf("%f",&Pizza[i].peso);
		printf("Informe o preço da pizza: ");
		scanf("%f",&Pizza[i].preco);
		Pizza[i].diametro = Pizza[i].raio * 2 ;
		printf("\n");
}
for (i=0; i<3; i++)
{
printf("Codigo da pizza: %d", Pizza[i].codigo);
printf("Diâmetro da pizza: %f", Pizza[i].diametro);
printf("Preço da pizza: %f", Pizza[i].preco);
printf("\n");
}
getch ();
return 0;
}

