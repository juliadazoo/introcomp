/*
	Name: Júlia Caroline
	Disciplina: Introdução à Computação
	Conteúdo: Estrutura Registro
	Date: 25/06/15 18:24
	Description: Estudos para avaliação semestral
*/

//Pizzaria DindaMassas

#include<stdio.h>
#include<conio.h>

#define TAM_NOME 15

main(){
	
	struct dados_pizza {
	int codigo;
	char nome[TAM_NOME];
	float raio, diametro, peso, preco;
};
	struct dados_pizza Pizza[3];
/*	printf("Informe o codigo da pizza:");
	scanf("%d",&Pizza[i].codigo);
	printf("Informe o nome da pizza:");
	scanf("%c",&Pizza[i].nome);
	printf("Informe o raio da pizza:");
	scanf("%f",%Pizza[i].raio);
	diametro=raio/2;
	prinf("Informe o peso da pizza");
	scanf("%f",&Pizza[i].peso);
	printf("Informe o preco da pizza:");
	scanf("%f",&Pizza[i].preco);
*/	
	int i;
	for (i=0; i<35; i++)
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
}
