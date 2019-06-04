#include<stdio.h>
#include<string.h>

void func(char cadeia[], char c, char verifica[])
{
  int i, n=0;
  for(i=0;i<strlen(cadeia);i++)
  {
    if(cadeia[i]==c)
    {
      strcpy(verifica[n], cadeia[i]);
    }else;
  }
  return;
}

int main()
{
  char cadeia[100], c, verifica[100];
  printf(" Digite a sequencia de caracter:");
  scanf(" %s", cadeia);
  printf("Digite o caracter a ser verificado:");
  scanf(" %c", &c);
  func(cadeia, c, verifica);
  printf("O numero de vezes que a letra %c aparece eh de %d vezes", c, strlen(verifica));
}
