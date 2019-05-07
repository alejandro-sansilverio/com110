#include <stdio.h>

void funPosmaxmin(int a, int b, int c, int *pmax, int *pmin){
    if(a>b && a>c){
        *pmax=1;
    }else if(a<b && a<c){
        *pmin=1; 
    } 
    if(b>a && b>c){
        *pmax=2;
    }else if(b<a && b<c){
        *pmin=2;
    }
    if(c>a && c>b){
       *pmax=3; 
    }else if(c<a && c<b){
       *pmin=3; 
    }else ;  
    return ;
}

int main()
{
    int a, b, c, pmax, pmin;
    printf("Digite o primeiro valor dos 3 numeros respectivamente:");
    scanf("%d %d %d", &a, &b, &c);
    funPosmaxmin(a, b, c, &pmax, &pmin);
    printf("A posicao do valor max eh %d e do valor minimo eh %d", pmax, pmin);
}
