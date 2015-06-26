/*
	Name: Júlia Caroline
	Date: 25/06/15 22:44
	Description: Pacientes 
*/

#include<stdio.h>
#include<conio.h>

int main(){
	struct dados_pacientes{
		int matricula;
		char nome[35];
		float peso, mensalidade;
	};
	struct dados_pacientes vet_Paciente[8];
	int i;
	float reaj;
	for(i=0;i<8;i++){
		printf("Informe a matricula do paciente ");
		scanf("%d",&vet_Paciente[i].matricula);
		printf("Informe o nome do paciente");
		scanf("%c",&vet_Paciente[i].nome);
		printf("Informe o peso do paciente");
		scanf("%f",&vet_Paciente[i].peso);
		printf("Informe a mensalidade");
		scanf("%f",&vet_Paciente[i].mensalidade);
		printf("\n");
	}
	for(i=0;i<8;i++){
		printf("Informe o valor de reajuste");
		scanf("%f",&reaj);
		vet_Paciente[i].mensalidade = vet_Paciente[i].mensalidade+reaj;
		printf("\n Matricula: %d - Peso: %f - Mensalidade: %f ",vet_Paciente[i].matricula, vet_Paciente[i].peso, vet_Paciente[i].mensalidade);
	}
getch();
return 0;
}
