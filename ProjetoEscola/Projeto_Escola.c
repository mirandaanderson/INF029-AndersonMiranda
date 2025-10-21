#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Projeto_Escola.h"

#define TAM 2

int main()
{
    // Declaração de variáveis
    Aluno alunos[TAM];
    Professor professores[TAM];
    Disciplina disciplina[TAM];
    int qtd_alunos = 0, qtd_professores = 0, qtd_disciplinas = 0;
    int opcao = -1;
    int opccao_2 = -1;

    
    do {
        printf("\n########Sistema de Gerenciamento Escolar########\n\n");
        printf("0. Sair\n");
        printf("1. Menu Aluno\n");
        printf("2. Menu Professor\n");
        printf("3. Menu Disciplina\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao); //Opção dp menu principal

        switch (opcao)
        {
            case 0:
                opcao = 0;
                break;
            case 1:
                int sairAluno;
                int opcaoAluno;
                do
                {
                    printf("\n########  Menu Aluno  ########\n");
                    opcaoAluno = opcoes(); //Opção do menu aluno

                    switch (opcaoAluno)
                    {
                        case 0:
                            sairAluno = 0;
                            break;
                        case 1://Cadastrar
                            if(qtd_alunos >= TAM)
                            {
                                printf("Lista Cheia.");
                            }else{
                                cadastrarAluno(alunos, qtd_alunos);
                                qtd_alunos++;
                            }
                            break;
                        //Fim do case 1 (Cadastrar)
                        case 2://Listar
                            pularLinha();    
                            listarAlunos(alunos, qtd_alunos);
                            break;
                        //Fim do case 2 (Listar)
                        case 3://Atualizar
                            pularLinha();    
                            listarAlunos(alunos, qtd_alunos);
                            break;
                        //Fim do case 3 (Atualizar)
                        case 4:

                            break;
                        //Fim do case 4 (Excluir)
                        default:
                            printf("Opção inválida.");
                            break;
                        //Fim do default
                    }
                } while (sairAluno != 0);
                break;
                //Fim do case 1 (Aluno).
            case 2:
                printf("\n########  Menu Professor  ########\n");
                break;
                //Fim do case  (Professor).
            case 3:
                printf("\n########  Menu Disciplina  ########\n");
                break;
                //Fim do case 3 (Disciplina).    
            default:
                printf("\nOpção Inválida!\n");
                break;
        }
    }while (opcao != 0);
    
   
}



void pularLinha()
{
    printf("\n\n");
}

int opcoes()
{
    int opcao;
    printf("0. Voltar\n");
    printf("1. Cadastrar\n");
    printf("2. Listar\n");
    printf("3. Atualizar\n");
    printf("4. Excluir\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
    return opcao;
}

void cadastrarAluno(Aluno *alunos, int qtd_alunos)
{   
    int valido = 0;
    pularLinha();
    getchar();
    printf("Insira às informações do aluno:\n\n");
    printf("Nome: ");
    fgets(alunos[qtd_alunos].nome, sizeof(alunos[qtd_alunos].nome), stdin);
    alunos[qtd_alunos].nome[strcspn(alunos[qtd_alunos].nome, "\n")] = '\0'; // Troca o '\n' por '\0'
    printf("Matricula: ");
    scanf("%d", &alunos[qtd_alunos].matricula);
    getchar();
    printf("Sexo (M/F): ");
    scanf("%c", &alunos[qtd_alunos].sexo);
    getchar();
    printf("Data de Nascimento (DD/MM/AAAA): ");
    fgets(alunos[qtd_alunos].data_nascimento, sizeof(alunos[qtd_alunos].data_nascimento), stdin);
    alunos[qtd_alunos].data_nascimento[strcspn(alunos[qtd_alunos].data_nascimento, "\n")] = '\0'; // Troca o '\n' por '\0'
    getchar();
    printf("CPF (000.000.000-00):");
    fgets(alunos[qtd_alunos].cpf, sizeof(alunos[qtd_alunos].cpf), stdin);
    alunos[qtd_alunos].cpf[strcspn(alunos[qtd_alunos].cpf, "\n")] = '\0'; // Troca o '\n' por '\0'
    /*while (valido != "1")
    {
    }*/
}

void listarAlunos(Aluno *alunos, int qtd_alunos)
{
    for(int i = 0; i < qtd_alunos; i++)
    {
        printf("\n########  Aluno %d  ########\n", (i+1));
        printf("%s\n", alunos[i].nome);
        printf("%d\n", alunos[i].matricula);
        printf("%c\n", alunos[i].sexo);
        printf("%s\n", alunos[i].data_nascimento);
        printf("%s\n", alunos[i].cpf);
    
    }
}
/*
int validar_cpf(char *cpf)
{
    int i = 0;
    int soma_digitos = 0;
    int digito1 = 0;
    int digito2 = 0;
    int tam = 13;
    while (i < tam)
    {
        if (cpf != "." || cpf != "-") {
         
            soma_digitos += (int) cpf[i] * 10 - i;
        }
    }
}*/