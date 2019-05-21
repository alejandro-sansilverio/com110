#include<stdio.h>

int i;

void preencheVet(int vet[])
{
  for(i=0;i<20;i++)
  {
    printf("Digite o %d valor:", i+1);
    scanf("%d", &vet[i]);
  }
  return;
}

void preencheVet2(int vet1[], int vet2[])
{
  for(i=0;i<20;i++)
  {
    if(vet1[i]%2==0) vet2[i]=vet1[i];
    else vet2[i]=2*vet1[i];
  }
  return;
}

void imprimir(int vet[])
{
  for(i=0;i<20;i++)
  {
    printf("%d ", vet[i]);
  }
  return;
}

int main()
{
  int numeros[20], vet2[20];
  preencheVet(numeros);
  preencheVet2(numeros, vet2);
  imprimir(vet2);
}
