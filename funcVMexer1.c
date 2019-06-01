#include<stdio.h>

void func(int vet[], int tamanho)
{
  int i;
  for(i=0;i<tamanho;i++)
  {
    if(vet[i]<0) vet[i] = 0;
  }
  return;
}
