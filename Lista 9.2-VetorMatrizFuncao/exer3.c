include<stdio.h>

void altera(float sal[], float ac, int n){
  int i;
  for(i=0;i<n;i++){
    sal[i] = sal[i] + ac;
  }
  return;
}

int main(){
  float sal[20], ac;
  int i, n;
  printf("Digite o valor de salarios a serem digitados:");
  scanf("%d", &n);
  for(i=0;i<n;i++){
    printf("Digite o valor do %d salario:", i+1);
    scanf("%f", &sal[i]);
  }
  printf("Digite o valor do acrescimo:");
  scanf("%f", &ac);
  altera(sal, ac, n);
  for(i=0;i<n;i++){
    printf("%f ", sal[i]);
  }
}
