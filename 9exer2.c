#include<stdio.h>

int main()
{
  int i, codigo[20];
  float valor[20], maior, imaior;
   printf("Digite o codigo e o valor do primeiro produto:");
   scanf("%d %f", &codigo[0], &valor[0]);
   maior = valor[0];
   imaior = 0;
  for(i=0;i<20;i++)
  {
    printf("Digite o codigo e valor do %d° produto:", i+1);
    scanf("%d %f", &codigo[i], &valor[i]);
    if(valor[i] > maior)
    {
      maior = valor[i];
      imaior = i;
    }
  }
  printf("O codigo do produto de maior valor eh %d", codigo[imaior]);
}
