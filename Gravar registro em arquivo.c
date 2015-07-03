#include<stdio.h>
#include<conio.h>

int main(){
struct cliente{
int numero;
char nome[20];
};
FILE *cli;
struct cliente c;
cli = fopen("d:\\JÚLIA\\Documents\\GitHub\\introcomp\\clientes.txt","a+");
if (cli == NULL)
printf("\nErro na abertura do arquivo");
else {
printf("\nDigite o número do cliente a ser incluido");
scanf("%d",&c.numero);
printf("Digite o nome do cliente a ser incluído: ");
scanf("%s",&c.nome);
fwrite(&c,sizeof(struct cliente),1,cli);
if (ferror(cli))
printf("Erro na gravação");
else printf("Gravação realizada com sucesso");
fclose(cli);
}
getchar();
return 0;
}
