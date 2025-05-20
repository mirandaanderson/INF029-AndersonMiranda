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

int menu_principal()
{
    int opcao;
    printf("########Sistema de Gerenciamento Escolar########\n\n");
    printf("1. Cadastrar Aluno\n2. Cadastrar Professor\n3. Cadastrar Disciplina\n4. Listar Alunos\n5. Listar Professores\n6. Listar Disciplinas\n0. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
    return opcao;
}

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
}