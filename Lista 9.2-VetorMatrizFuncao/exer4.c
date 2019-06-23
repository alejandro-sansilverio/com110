#include<stdio.h>

void preenche(int vet[], int n){
int i;
for(i=0;i<n;i++){
  printf("Digite o valor do %d elemento:", i+1);
  scanf("%d", &vet[i]);
}
return;
}

void tvet(int vet1[], int vet2[], int vet3[], int n){
int i;
for(i=0;i<n;i++){
  vet3[i] = vet1[i]+vet2[i];
}
return;
}

int main(){
  int vet1[10], vet2[10], vet3[10], n, i;
  printf("Digite a quantidade de numeros a serem digitados:");
  scanf("%d", &n);
  while(n>10){
  printf("Valor invalido! O valor deve ser no máximo 10\n");
  printf("Digite a quantidade de numeros a serem digitados:");
  scanf("%d", &n);
  }
  preenche(vet1, n);
  preenche(vet2, n);
  tvet(vet1, vet2, vet3, n);
  for(i=0;i<n;i++){
    printf("%d ", vet3[i]);
  }
}
