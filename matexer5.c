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
  int maxmin, i;
  for(l=0;l<n;l++)
  {
    for(c=1;c<n;c++)
    {
      if(A[l][c]>A[l][c-1]) i=l;//Esta pegando o maior de cada linha e atribuindo a linha a i
      else;
    }
  }
    for(c=1;c<n;c++)
    {
      if(A[i][c]>A[i][c-1]) maxmin = A[i][c];
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
