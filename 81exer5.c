Faça um programa que imprima invertidos os nomes dos algarismos de um número
inteiro de três dígitos. Use a sua função no programa principal. Não é necessário validar
a entrada do número. Ex: 234 saída: quatro três dois.

#include<stdio.h>

void funcprint(int n)
{
  if(n==1) printf("um");
  else if(n==2) printf(" dois ");
  else if(n==3) printf(" tres ");
  else if(n==4) printf(" quatro ");
  else if(n==5) printf(" cinco ");
  else if(n==6) printf(" seis ");
  else if(n==7) printf(" sete ");
  else if(n==8) printf(" oito ");
  else printf(" nove ");
  return ;
}

int main()
{
  int n;
  printf("Digite um numero inteiro de 3 algarismos(exemplo:234):");
  scanf("%d", &n);
  funcprint(n -(centena + dezena));
  funcprint((n - centena) / 10);
  funcprint(n / 100);
}
