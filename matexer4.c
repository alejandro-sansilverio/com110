#include<stdio.h>
int l, c;

void preenchemat(int mat[][5])
{
  for(l=0;l<5;l++)
  {
    printf("Preenchendo a %d linha\n", l+1);
    for(c=0;c<5;c++)
    {
      printf("Digite o %d valor:", c+1);
      scanf("%d", &mat[l][c]);
    }
  }
}

void imprimeDp(int mat[][5])
{
  printf("\nDiagonal principal\n");
  for(l=0;l<5;l++)
  {
    for(c=0;c<5;c++)
    {
      if(l==c) printf("%d ", mat[l][c]);
      else;
    }
  }
  return;
}

void imprimeDs(int mat[][5])
{
  printf("\nDiagonal Secundaria\n");
  for(l=0;l<5;l++)
  {
    for(c=0;c<5;c++)
    {
      if(l+c==4) printf("%d ", mat[l][c]);
      else;
    }
  }
  return;
}

int main()
{
  int mat[5][5];
  preenchemat(mat);
  imprimeDp(mat);
  imprimeDs(mat);
}
