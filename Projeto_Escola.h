typedef struct{
    int matricula;
    char nome[50];
    char sexo;
    char data_nascimento[11]; // Formato: dd/mm/aaaa
    char cpf[15]; // Formato: 000.000.000-00
} Aluno;

typedef struct{
    int matricula;
    char nome[50];
    char sexo;
    char data_nascimento[11]; // Formato: dd/mm/aaaa
    char cpf[15]; // Formato: 000.000.000-00
} Profressor;

typedef struct {
    char nome[50];
    int codigo;
    int semestre;
    int professor_matricula; // Matricula do professor
    int alunos[50]; 
} Disciplina;