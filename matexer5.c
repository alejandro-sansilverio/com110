#include<stdio.h>
int l, c;

void preenchermat(int A[][10], int n)
{
  for(l=0;l<n;l++)
  {
    printf("\nPreenchendo %d linha\n", l+1);
    for(c=0;c<n;c++)
    {
      printf("Digite o %d valor:", c+1);
      scanf("%d", &A[l][c]);
    }
  }
  return;
}

int funcMaxmin(int A[][10], int n)
{
  int maxmin, i, vet[2];
  vet[0]=0;
  vet[1]=0;
  for(l=0;l<n;l++)
  {
    for(c=1;c<n;c++)
    {
      if(A[l][c]>A[l][c-1]&&A[l][c]>A[vet[0]][vet[1]]) {
        vet[0]= l;//Esta pegando o maior de cada linha e atribuindo a linha a i
      vet[1]=c;
      }
      else;
    }
  }
    for(c=1;c<n;c++)
    {
      if(A[vet[0]][c]>A[vet[0]][c-1]) maxmin = A[vet[0]][c-1];
      else;
    }
  return maxmin;
}

int main()
{
  int A[10][10], M;
  printf("Digite a dimensao da matriz:");
  scanf("%d", &M);
  while(M>10 && M<=0)
  {
    printf("Valor Invalido\n");
    printf("Por favor, digite um numero valido menor-igual a 10:");
    scanf("%d", &M);
  }
  preenchermat(A, M);
  printf("O elemento maxmin da matriz eh %d ", funcMaxmin(A, M));
}

