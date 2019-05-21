#include<stdio.h>

int main()
{
  int i, cont=0;
  char caracteres[10], letra;
  printf("Digite uma sequencia de 10 caracteres!\n");
  for(i=0;i<10;i++)
  {
    printf("Digite o %d caracter:", i+1);
    scanf("%c", &caracteres[i]);
    fflush(stdin);
    __fpurge(stdin);
  }
  printf("Digite a letra que deseja pesquisar:");
  scanf("%c", &letra);
  for(i=0;i<10;i++)
  {
    if(caracteres[i] == 'letra') cont++;
  }
  printf("A quantidade de vezes que a letra foi digitada foi de %d", cont);
}
