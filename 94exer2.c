#include<stdio.h>
#include<string.h>

int func(char cadeia[], char c)
{
  int i, n=0;
  for(i=0;i<strlen(cadeia);i++)
  {
    if(cadeia[i]==c) n++;
    else;
  }
  return n;
}

int main()
{
  char cadeia[100], c;
  printf("Digite a cadeia de caracter:");
  scanf(" %[^\n]", cadeia);
  printf("Digite a letra a ser procurada:");
  scanf(" %c", &c);
  printf("O numero de vezes que a letra %c apareceu foi de %d", c, func(cadeia, c));
}
