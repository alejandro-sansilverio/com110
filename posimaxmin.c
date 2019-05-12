#include <stdio.h>

void funPosmaxmin(int a, int b, int c, int *pmax, int *pmin){
    if(a>b && a>c)
    {
        *pmax=1;
        if(b<c) *pmin=2;
        else *pmin=3;
    }
    else if(b>a && b>c) 
    {
        *pmax=2;
        if(a<c) *pmin=1;
        else *pmin=3;
    }
    else 
    {
        *pmax=3;
        if(a<b) *pmin=1;
        else *pmin=2;
    }
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
