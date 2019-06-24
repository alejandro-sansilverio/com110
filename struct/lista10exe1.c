#include<stdio.h>
#include<string.h>

struct inf_aluno{
  char nome[101];
  int matricula, codc;
  float renda; 
};

typedef struct inf_aluno inf_aluno;

int main()
{
  inf_aluno aluno;
  
  //coletando dados do usuário//
  
  printf("Digite o nome do aluno:");
  scanf(" %[^\n]s", &aluno.nome);
  printf("Digite o numero de matricula do aluno:");
  scanf("%d", &aluno.matricula);
  printf("Digite o codigo do curso:");
  scanf("%d", &aluno.codc);
  printf("Digite o valor do rendimento academico:");
  scanf("%f", &aluno.renda);
  
  //Mostrando os dados na tela//
  
  printf("%s", aluno.nome);
  printf("O numero de matricula do aluno eh %d\n", aluno.matricula);
  printf("O codigo do curso do aluno eh %d\n", aluno.codc);
  printf("O rendimento academico do aluno eh %f\n", aluno.renda);
  
  if(strcmp(aluno.nome,"João Jose da Silva")==0) printf("O numero de matricula do aluno eh %d\n", aluno.matricula);
  else printf("Aluno nao encontrado!\n");
}
