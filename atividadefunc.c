#include<stdio.h>
int l, c;

void funcA(int estoque[][4],int veta[])
{
  for(l=0;l<4;l++)
  {
    vet[l]=0;
    for(c=0;c<4;c++) vet[l] = vet[l] + vet[c];
  }
  return;
}

int funcB(int estoque[][5], int c)
{
  int m;
  for(l=1;l<4;l++)
  {
    if(estoque[l][c]>estoque[l-1][c]) m=l+1;
    else ;
  }
  return m;
}

int funcC(int estoque[][5], int c)
{
  menor;
  
}

int main()
{
  int estoque[5][4], veta[4];
  for(l=0;l<5;l++)
  {
  printf("INFORMACOES CORRESPONDENTES AO %d ARMAZEM", l+1);
    for(c=0;c<4;c++)
    {
    if(l==4)
    {
      printf("Digite o custo do %d produto:", c+1);
      scanf("%d", &estoque[l][c]);
    }else
    {
      printf("Digite a quantidade em estoque do %d produto:", c+1);
      scanf("%d", &estoque[l][c]);
     }
    }
  }
  funcA(veta, estoque);
  funcB(estoque, 1);
  funcC(estoque, 3);
}
