#include<stdio.h>

int l, c;

void cadastroestoque(int estoque[][10])
{
    for(l=0; l<2; l++)
    {
        if(l==0)
        {
            printf("CADASTRO DO CODIGO DO PRODUTO\n");
            for(c=0; c<10; c++)
            {
                printf("Digite o codigo do %d produto:", c+1);
                scanf("%d", &estoque[l][c]);
            }
        }
        else
        {
            printf("CADASTRO DE ESTOQUE DO PRODUTO\n");
            for(c=0; c<10; c++)
            {
                printf("Digite a quantidade em estoque do produto com o codigo %d:", estoque[0][c]);
                scanf("%d", &estoque[l][c]);
            }
        }
    }
    return;
}

int quantP(int estoque[][10])
{
    int soma=0;
    for(c=0; c<10; c++)
    {
        soma = soma + estoque[1][c];
    }
    return soma;
}

void imprime10(int estoque[][10])
{
    printf("\nCODIGO DOS PRODUTOS COM ESTOQUE MAIOR QUE 10\n");
    for(c=0; c<10; c++)
    {
        if(estoque[1][c]>10)
        {
            printf("%d ", estoque[0][c]);
        }
    }
    return;
}

int main()
{
    int estoque[2][10];
    cadastroestoque(estoque);
    printf("A quantidade total de produtos eh %d", quantP(estoque));
    imprime10(estoque);
}
