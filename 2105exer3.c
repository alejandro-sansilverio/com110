#include<stdio.h>

void preencheVet(int vet[])
{
  int i;
  for(i=0;i<30;i++)
  {
    printf("Digite o %d numero:", i+1);
    scanf("%d", &vet[i]);
  }
  return;
}

int somaInter(int vet[], int x, int y)
{
  int i, soma=0;
  for(i=x;i<=y;i++)
  {
   soma = soma + vet[i]; 
  }
  return soma;
}

int main()
{
  int numeros[30], x, y;
  preencheVet(numeros);
  printf("Digite o intervalo do indice a ser somado:");
  scanf("%d %d", &x, &y);
  while(x<0||y<0||x>y)
  {
    printf("Intervalo invalido! Digite um intervalo valido que seja maior que 0 e que o segundo numero seja maior que o primeiro:");
    scanf("%d %d", &x, &y);
  }
  printf("A soma entre o intervalo eh %d ", somaInter(numeros, x, y));
}
