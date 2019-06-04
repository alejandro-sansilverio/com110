#include<stdio.h>
#include<string.h>

int func(char cadeia[], char c)
{
  int i, n=0;
  for(i=0;i<strlen(cadeia);i++)
  {
    if(cadeia[i]==c)
    {
     n++;
    }else;
  }
  return n;
}

int main()
{
  char cadeia[100], c, verifica[100];
  printf(" Digite a sequencia de caracter:");
  scanf(" %s", cadeia);
  printf("Digite o caracter a ser verificado:");
  scanf(" %c", &c);
  printf("O numero de vezes que a letra %c aparece eh de %d vezes", c, func(cadeia, c));
}
