#include<stdio.h>

int main()
{
  int i, numeros[10];
  for(i=0;i<10;i++)
  {
    printf("Digite o %d ° numero:", i+1);
    scanf("%f", &numeros[i]);
  }
  for(i=0;i<10;i++)
  {
    if(numeros[i]%2==0)
    {
    printf("\n %d ", numeros[i]);
    }
  }
}
