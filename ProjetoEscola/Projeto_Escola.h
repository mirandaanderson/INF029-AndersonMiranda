#ifndef PROJETO_ESCOLA_H
#define PROJETO_ESCOLA_H

typedef struct
{
    int matricula;
    char nome[50];
    char sexo;
    char data_nascimento[11]; // Formato: dd/mm/aaaa
    char cpf[15];             // Formato: 000.000.000-00
} Aluno;

typedef struct
{
    int matricula;
    char nome[50];
    char sexo;
    char data_nascimento[11]; // Formato: dd/mm/aaaa
    char cpf[15];             // Formato: 000.000.000-00
} Professor;

typedef struct
{
    char nome[50];
    int codigo;
    int semestre;
    int professor_matricula;  // Matricula do professor
    int alunos_matricula[50]; // Matricula dos alunos
} Disciplina;


void menu_principal(int *opcao);

void menu_secundario (int *opcao);

int validar_cpf(int);

#endif //PROJETO_ESCOLA.H