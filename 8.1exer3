#include<stdio.h>
#include<math.h>

int funcRef(int *pvar)
{
  int resto;
  resto = *pvar % 10;
  *pvar = *pvar / 10;
  return resto;
}

int main()
{
  int n;
  printf("Digite um valor inteiro:");
  scanf("%d", &n);
  printf("O novo valor eh %d e o resto eh %d", n, funcRef(&n));
}
