
#include <stdio.h>

void maxmin(int n, int *pmax, int *pmin){
    int i, num;
    printf("Digite o primeiro numero:");
    scanf("%d", pmax);
    *pmin=*pmax;
    for(i=2;i<=n;i++){
        printf("Digite o %d numero:", i);
        scanf("%d", &num);
        if(num>*pmax){
           *pmax=num; 
        }else if(num<*pmin){
            *pmin=num;
        }else ;
    }
    return;
}

int main()
{
    int n, max, min;
    printf("Digite a quantidade de numeros a serem lidos:");
    scanf("%d", &n);
    maxmin(n, &max, &min);
    printf("\nO valor max eh %d e o valor minimo %d", max, min);
    return 0;
}
