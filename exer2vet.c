#include<stdio.h>

void preenchevet(int vet[], int a)
{
    int i;
    for(i=0;i<a;i++)
    {
        printf("Digite o valor para a %d posicao:", i+1);
        scanf("%d", &vet[i]);
    }
    return;
}

int soma(int vet[])
{
    int i, soma=0;
    for(i=0;i<5;i++)
    {
        soma = soma + vet[i];
    }
    return soma;
}

void preenchetvet(int vett[], int vetp[], int vets[], int a)
{
    int i;
    for(i=0;i<a;i++)
    {
        if(i%2 != 0)
        {
            vett[i]=soma(vets)/vetp[i];
        }else
        {
            vett[i]=vetp[i]*10;
        }
    }
    return;
}

int main()
{
    int pvet[10], svet[5], tvet[10];
    preenchevet(pvet, 10);
    preenchevet(svet, 5);
    preenchetvet(tvet, pvet, svet, 10);
}
