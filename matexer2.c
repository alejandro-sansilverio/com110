#include<stdio.h>
int l, c;

void preenchemat(int mat[][10], int n)
{
  for(l=0;l<n;l++)
  {
    for(c=0;c<n;c++)
    {
      printf("Digite um valor inteiro:");
      scanf("%d", &mat[l][c]);
    }
  }
  return;
}

int calculasoma(int mat[][10], int n)
{
  int soma=0;
  for(l=0;l<n;l++)
  {
    for(c=0;c<n;c++)
    {
      if(mat[l][c]%2==0){
        soma = soma + mat[l][c];
      }else;
    }
  }
  return soma;
}

int main()
{
  int n, mat[10][10];
  printf("Digite o n para a dimensao:");
  scanf("%d", &n);
  preenchemat(mat, n);
  printf("O resultado da soma dos numeros pares da matriz eh %d", calculasoma(mat, n));
}
