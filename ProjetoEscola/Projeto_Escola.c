#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Projeto_Escola.h"

int main()
{
    // Declaração de variáveis
    Aluno alunos[50];
    Professor professores[50];
    Disciplina disciplina[50];
    int qtd_alunos = 0, qtd_professores = 0, qtd_disciplinas = 0;
    int opcao = -1;

    /*while (opcao != 0)
    {
        do
        {
            // Mostra o menu principal
        opcao = menu_principal();
        if (opcao < 0 || opcao > 6)
        {
            printf("Opcao invalida! Tente novamente.\n");
        }
        } while (opcao < 0 || opcao > 6);

        switch (opcao)
        {
        case 1: // Cadastrar Aluno
           
            break;
        
        default:
            break;
        }
    }*/
   menu_principal(&opcao);
   menu_secundario(&opcao);
   
}


void menu_principal(int *opcao)
{
    printf("########Sistema de Gerenciamento Escolar########\n\n");
    printf("1. Menu Aluno\n2. Menu Professor\n3. Menu Disciplina\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
}

void menu_secundario(int *opcao) {
    char menu[3][20] = {"Aluno", "Professor", "Disciplina"};
    
    printf("########Menu %s########\n\n", menu[*opcao - 1]);
    printf("1. Menu Aluno\n2. Menu Professor\n3. Menu Disciplina\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
}
/*
int cadastrar_aluno(Aluno *alunos, int qtd_alunos)
{
    int valido = 0;

    printf("Insira às informações do aluno:\n\n");
    printf("Nome: ");
    fgets(alunos[qtd_alunos].nome, sizeof(alunos[qtd_alunos].nome), stdin);
    alunos[qtd_alunos].nome[strcspn(alunos[qtd_alunos].nome, "\n")] = "\0"; // Troca o '\n' por '\0'
    printf("Matricula: ");
    scanf("%d", &alunos[qtd_alunos].matricula);
    printf("Sexo (M/F): ");
    scanf(" %c", &alunos[qtd_alunos].sexo);
    printf("Dara de Nascimnto (DD/MM/AAAA): ");
    scanf("%s", &alunos[qtd_alunos].data_nascimento);
    printf("CPF (000.000.000-00):");
    scanf("%s", &alunos[qtd_alunos].cpf);
    while (valido != "1")
    {
    }
}

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