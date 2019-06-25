#include<stdio.h>
#include<string.h>

struct inf_carro 
{
  char marca[16], cor[11];
  int ano;
  float valor;
};

typedef struct inf_carro inf_carro;

void preenche(inf_carro carro[])
{
    int i;
    for(i=0;i<20;i++)
    {
        printf("INFORMACOES DO %d CARRO!\n", i+1);
        printf("Digite a marca do carro:");
        scanf(" %[^\n]", carro[i].marca);
        printf("Digite o ano do carro:");
        scanf("%d", &carro[i].ano);
        printf("Digite a cor do carro:");
        scanf(" %[^\n]", carro[i].cor);
        printf("Digite o valor do carro:");
        scanf("%f", &carro[i].valor);
    }
    return;
}

void pesquisaP(inf_carro carro[])
{
    int i;
    float valor;
    printf("Digite o valor a ser pesquisado:");
    scanf("%f", &valor);
    for(i=0;i<20;i++)
    {
        if(carro[i].valor<=valor) printf("Marca: %s\tAno: %d\tCor: %s\tPreco: %f\n", carro[i].marca, carro[i].ano, carro[i].cor, carro[i].valor);
    }
    return;
}

float func(inf_carro carro[])
{
    char marca[16], cor[11];
    int ano, i;
    printf("Digite a marca do carro:");
    scanf(" %[^\n]", marca);
    printf("Digite a cor do carro:");
    scanf(" %[^\n]", cor);
    printf("Digite o ano:");
    scanf("%d", &ano);
    for(i=0;i<20;i++)
    {
        if(strcmp(carro[i].marca, marca)==0 && strcmp(carro[i].cor, cor)==0 && carro[i].ano == ano) return carro[i].valor;
        else return 0;
    }
}

int main()
{
    inf_carro vetcarros[20];
    float result;
    preenche(vetcarros);
    pesquisaP(vetcarros);
    result = func(vetcarros);
    printf("%f", result);
}
