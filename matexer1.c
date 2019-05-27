#include<stdio.h>

void preenchemat(int mat[][8])
{
  int l, c;
  for(l=0;l<5;l++)
  {
    for(c=0;c<8;c++)
    {
      printf("Digite um valor inteiro:");
      scanf("%d", &mat[l][c]);
    }
  }
  return;
}

void imprime(int mat[][8])
{
  int l, c;
  for(l=0;l<5;l++)
  {
    for(c=0;c<8;c++)
    {
      printf(" %d ", mat[l][c]);
    }
    printf("\n");
  }
  return;
}

int main()
{
  int mat[5][8];
  preenchemat(mat);
  imprime(mat);
}
