#include<stdio.h>

int convertS(int a, int b, int c, int *p)
{
    *p = (a*3600)+(b*60)+c;
}

int main()
{
    int hora, minuto, segundo, resultado;
    printf("\nCONVERTE PARA SEGUNDO\n");
    printf("Digite o valor de horas completas:");
    scanf("%d", &hora);
    printf("Digite o valor de minutos:");
    scanf("%d", &minuto);
    printf("Digite o valor de segundos:");
    scanf("%d", &segundo);
    convertS(hora, minuto, segundo, &resultado);
    printf("\nO valor correspondente em segundos e %d", resultado);
}