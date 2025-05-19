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
    int opcao;

    while (opcao != 0)
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
            /* code */
            break;
        
        default:
            break;
        }
    }
   
}