#include<stdio.h>

int main()
{
  int n, i;
  float notas[50], media=0;
  printf("Digite a quantidade de notas a serem informadas:");
  scanf("%d", &n);
  for(i=0;i<n;i++)
  {
    printf("Digite a %d° nota:", i+1);
    scanf("%f", &notas[i]);
    media = media + notas[i];
  }
  for(i=0;i<n;i++)
  {
  if(notas[i]>(media/2))
  {
    cont++;
  }
  }
  printf
}
