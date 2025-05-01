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
} Professor;

typedef struct {
    char nome[50];
    int codigo;
    int semestre;
    int professor_matricula; // Matricula do professor
    int alunos_matricula[50]; // Matricula dos alunos
} Disciplina;

int menu_principal() {
    int opcao;
    printf("########Sistema de Gerenciamento Escolar########\n\n");
    printf("1. Cadastrar Aluno\n2. Cadastrar Professor\n3. Cadastrar Disciplina\n4. Listar Alunos\n5. Listar Professores\n6. Listar Disciplinas\n0. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
    return opcao;
}

