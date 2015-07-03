#include<stdio.h>
#include<conio.h>

int main(){
FILE *p;
int resposta;
p = fopen("d:\\JÚLIA\\Documents\\GitHub\\introcomp\\teste2.txt", "w");
if (p == NULL)
printf("\nErro na abertura");
else {
printf("\nSucesso na abertura");
resposta = fclose(p);
if (resposta == 0)
printf("\nSucesso no fechamento");
else printf("\nErro no fechamento");
}
getch();
return 0;
}
