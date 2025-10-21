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


int validar_cpf(int);

int opcoes();

void cadastrarAluno(Aluno *alunos, int qtd_alunos);

void listarAlunos(Aluno *alunos, int qtd_alunos);

void pularLinha();

#endif //PROJETO_ESCOLA.H