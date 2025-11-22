#include <stdio.h>

void mostrarExplicacoes() {
    printf("\n📘 Explicações das perguntas:\n");
    printf("1. A chave primária identifica unicamente cada registro em uma tabela.\n");
    printf("2. A normalização evita redundâncias e inconsistências nos dados.\n");
    printf("3. Relacionamento N:N significa que várias entidades de um tipo se relacionam com várias de outro.\n");
    printf("4. No modelo lógico, relacionamentos N:N são representados por tabelas auxiliares.\n");
    printf("5. A Segunda Forma Normal (2FN) elimina dependências parciais.\n\n");
}

int jogarQuiz() {
    int resposta, pontuacao = 0;

    printf("\n🧠 Quiz: Modelagem de Dados\n\n");

    // Pergunta 1
    printf("1. Qual das alternativas representa corretamente o conceito de chave primária?\n");
    printf("1) Um atributo que pode conter valores repetidos\n");
    printf("2) Um atributo que armazena dados temporários\n");
    printf("3) Um atributo que representa uma relação entre duas tabelas\n");
    printf("4) Um atributo que identifica unicamente cada registro em uma tabela\n");
    printf("Sua resposta: ");
    scanf("%d", &resposta);
    if (resposta == 4) pontuacao++;

    // Pergunta 2
    printf("\n2. Qual é a principal função da normalização em bancos de dados?\n");
    printf("1) Reduzir o número de tabelas no banco\n");
    printf("2) Permitir a criação de índices automaticamente\n");
    printf("3) Aumentar a velocidade de acesso aos dados\n");
    printf("4) Evitar redundâncias e inconsistências nos dados\n");
    printf("Sua resposta: ");
    scanf("%d", &resposta);
    if (resposta == 4) pontuacao++;

    // Pergunta 3
    printf("\n3. No modelo entidade-relacionamento, o que representa um relacionamento N:N?\n");
    printf("1) Cada entidade A se relaciona com nenhuma entidade B\n");
    printf("2) Cada entidade A se relaciona com várias entidades B, e vice-versa\n");
    printf("3) Cada entidade A se relaciona com uma única entidade B\n");
    printf("4) Cada entidade A se relaciona com exatamente duas entidades B\n");
    printf("Sua resposta: ");
    scanf("%d", &resposta);
    if (resposta == 2) pontuacao++;

    // Pergunta 4
    printf("\n4. Verdadeiro ou falso: No modelo lógico, os relacionamentos são representados por tabelas auxiliares.\n");
    printf("1) Verdadeiro\n");
    printf("2) Falso\n");
    printf("Sua resposta: ");
    scanf("%d", &resposta);
    if (resposta == 1) pontuacao++;

    // Pergunta 5
    printf("\n5. Qual das opções abaixo representa uma forma normal?\n");
    printf("1) Forma Relacional\n");
    printf("2) Forma de Cardinalidade\n");
    printf("3) Forma Primária\n");
    printf("4) Segunda Forma Normal (2FN)\n");
    printf("Sua resposta: ");
    scanf("%d", &resposta);
    if (resposta == 4) pontuacao++;

    printf("\n🎯 Pontuação final: %d de 5\n", pontuacao);
    return pontuacao;
}

int main() {
    int opcao;
    do {
        int pontuacao = jogarQuiz();

        printf("\n📋 Menu:\n");
        printf("1) Jogar novamente\n");
        printf("2) Ver explicações\n");
        printf("3) Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 2) {
            mostrarExplicacoes();
            printf("Pressione qualquer tecla para continuar...\n");
            getchar(); // Captura o Enter pendente
            getchar(); // Aguarda nova entrada
        }

    } while (opcao == 1 || opcao == 2);

    printf("\n👋 Obrigado por jogar! Até a próxima.\n");
    return 0;
}