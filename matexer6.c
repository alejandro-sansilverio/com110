#include<stdio.h>
int l, c;

void preencheMat(int mat[][5], int n)
{
  for(l=0;l<n;l++)
  {
  printf("\nPreenchendo a %d linha\n", l+1);
    for(c=0;c<n;c++)
    {
      printf("Digite o %d valor:", c+1);
      scanf("%d", &mat[l][c]);
    }
   }
   return;
}

void multiplicaMat(int A[][5], int B[][5], int R[][5])
{
  int k;
  for(l=0;l<5;l++)
  {
    for(c=0;c<5;c++)
    {
      R[l][c] = 0;
      for(k=0;k<5;k++)
      {
        R[l][c] = R[l][c] + A[l][k] * B[k][c];
      }
    }
  }
  return;
}

void imprime(int vet[][5])
{
  for(l=0;l<5;l++)
  {
   for(c=0;c<5;c++)
   {
      printf("%d ", vet[l][c]);
   }
    printf("\n");
  }
}

int main()
{
  int A[5][5], B[5][5], R[5][5];
  preencheMat(A, 5);
  preencheMat(B, 5);
  multiplicaMat(A, B, R);
  imprime(R);
}
