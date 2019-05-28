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

int func(int A[][5], int B[][5])
{
  
}

multiplicaMat(int A[][5], int B[][5])
{
  for(l=0;l<5;l++)
  {
    for(c=0;c<5;c++)
    {
      R[l][c] = A[][]
    }
  }
}

int main()
{
  int A[5][5], B[5][5];
  preencheMat(A, 5);
  preencheMat(B, 5);
  multiplicaMat(A, B);
}
