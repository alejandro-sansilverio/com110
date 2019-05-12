#include<stdio.h>

void funcH(int minutos, int *phorac, int *pminc)
{
  *phorac= minutos/60;
  *pminc= minutos%60;
  printf("\nSe passaram exatamente %d horas e %d minutos", *phorac, *pminc);
  return ;
}

int main()
{
  int minutos, hcorrente=0, mcorrente=0;
  printf("\nDigite quantos minutos se parraram desde as 00:00 :");
  scanf("%d", &minutos);
  funcH(minutos, &hcorrente, &mcorrente);
}
