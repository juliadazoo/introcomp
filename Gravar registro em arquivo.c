#include<stdio.h>
#include<conio.h>

int main(){
struct cliente{
int numero;
char nome[20];
};
FILE *cli;
struct cliente c;
cli = fopen("d:\\J�LIA\\Documents\\GitHub\\introcomp\\clientes.txt","a+");
if (cli == NULL)
printf("\nErro na abertura do arquivo");
else {
printf("\nDigite o n�mero do cliente a ser incluido");
scanf("%d",&c.numero);
printf("Digite o nome do cliente a ser inclu�do: ");
scanf("%s",&c.nome);
fwrite(&c,sizeof(struct cliente),1,cli);
if (ferror(cli))
printf("Erro na grava��o");
else printf("Grava��o realizada com sucesso");
fclose(cli);
}
getchar();
return 0;
}
