#include<stdio.h>
int i;

void preencheVet(int vet[])
{
  for(i=0;i<15;i++)
  {
    printf("Digite o %d valor:", i+1);
    scanf("%d", &vet[i]);
  }
  return;
}

void procura(int vet[], int *maior, int *pmaior, int *menor, int *pmenor)
{
  for(i=1;i<15;i++)
  {
    if(vet[i]>vet[i-1])
    {
      *maior = vet[i];
      *pmaior = i+1;
    }
    else if(vet[i]<vet[i-1])
    {
        *menor = vet[i];
        *pmenor = i+1;
    }
  }
  return;
}

int main()
{
  int numeros[15], maior, pmaior, menor, pmenor;
  preencheVet(numeros);
  procura(numeros, &maior, &pmaior, &menor, &pmenor);
  printf("\n O valor do numero maior eh %d e ele se encontra na posicao %d", maior, pmaior);
  printf("\n O valor do menor numero eh %d e ele se encontra na posicao %d", menor, pmenor);
}
