#include<stdio.h>

int calculaS(int a, int *p)
{
    *p = *p+a;
}

int main()
{
    int n1, n2, i, soma=0;
    printf("\nSOMA DE NUMEROS INTEIROS DO INTERVALO\n");
    printf("Digite o valor do primeiro numero:");
    scanf("%d", &n1);
    printf("Digite o valor do segundo numero:");
    scanf("%d", &n2);
    for(i=n1;i<=n2;i++)
    {
        calculaS(i, &soma);
    }
    printf("O valor da soma e %d", soma);
}