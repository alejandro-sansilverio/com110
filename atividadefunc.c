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
  int m=1;
  for(l=1;l<4;l++)
  {
    if(estoque[l][c]>estoque[l-1][c]) m=l+1;
    else ;
  }
  return m;
}

int funcC(int estoque[][5], int c)
{
  menor=1;
  for(l=1;l<4;l++)
  {
   if(estoque[l][c]<estoque[l-1][c]) menor = l+1;
    else;
  }
  return;
}

void funcD(int estoque[][5], int vcusto[]) 
{
  for(c=0;c<4;c++)
  {
   for(l=0;l<4;l++)
   {
      vcusto[c] = vcusto[c] + estoque[l][c]; 
   }
    vcusto[c] = vcusto[c]*estoque[4][c];
  }
  return;
}

void funcE(int estoque[][5], int vcusto[], int veta[])
{
 for(l=0;l<4;l++)
 {
  vcusto[l] = veta[l]*estoque[4] 
 }
}

int main()
{
  int estoque[5][4], veta[4], vcustop[4], vcustoa[4];
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
  funcD(estoque, vcustop);
  funcE(estoque, vcustoa, veta);
}
