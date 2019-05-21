#include<stdio.h>

void preencheVetor(int vet[], int a)
{
  int i;
  for(i=0;i<a;i++)
  {
    printf("Digite o %d valor", i+1);
    scanf("%d", &vet[i]);
  }
  return;
}

void quantParImpar(int vet[], int *pp, int *pim, int n)
{
  int i;
  for(i=0; i<n; i++)
  {
    if(vet[i]%2==0) *pp++;
    else *pim++;
  }
  return;
}

int main()
{
  int numeros[30], n, quantPar=0, quantIm=0;
  printf("Digite a quantidade de numeros a serem digitados:");
  scanf("%d", &n);
  while(n>30)
  {
    printf("\nvalor invalido! Digite um valor menor ou igual a 30:");
    scanf("%d", &n);
  }
  preencheVetor(numeros, n);
  quantParImpar(numeros, &quantPar, &quantIm, n);
  printf("A quantidade de numeros pares eh %d e a quantidade de numeros impares eh %d", quantPar, quantIm);
}
