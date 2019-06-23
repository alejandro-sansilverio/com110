#include<stdio.h>

void func(int vet[], int n){
  int i;
  for(i=0,i<n;i++)
  {
    if(vet[i]<0) vet[i] = 0;
  }
  return;
}
