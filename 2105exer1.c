#include<stdio.h>

int i;

void preenchevetor(int numeros[])
{
  for(i=0;i<10;i++)
  {
    printf("Digite o %d valor:", i+1);
    scanf("%d", &numeros[i]);
  }
  return ;
}

void somaPares(*psoma, numeros[])
{
  for(i=0;i<10;i++)
  {
    if(numeros[i]%2==0) *psoma = *psoma + numeros[i];
  }
}

int main()
{
  int numeros[10], soma=0;
  preenchevetor(numeros);
  somaPares(&soma, numeros);
  printf("A soma dos vetores eh %d ", soma);
}
