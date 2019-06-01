#include<stdio.h>

void func(int A[], int B[])
{
  int i;
  for(i=0;i<30;i++)
  {
    B[i] = B[i] + A[i];
  }
  return;
}
