#include<stdio.h>
#include<string.h>

void func(int vet1[], int vet2[], int vet3[]){
  vet3[]=strcmp(vet1, vet2);
  return;
}

int main(){
char vet1[11], vet2[11], vet3[11];
printf("Digite a primeira sequencia de caracter:");
scanf("%s", &vet1);
printf("Digite a segunda sequencia de caracter:");
scanf("%s", &vet2);
func(vet1, vet2, vet3);
}
