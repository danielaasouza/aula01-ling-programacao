#include <stdio.h>

int main() {
    char nome[100], curso[100];
    int idade, ano_nascimento;

    printf("=== PROGRAMA DE APRESENTAÇÃO ===\n");

    printf("Digite seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu curso: ");
    scanf(" %99[^\n]", curso);

    ano_nascimento = 2025 - idade;

    printf("\n=== Bem vindo(a) ===\n");
    printf("Olá, %s\n", nome);
    printf("Você tem %d anos e estuda %s\n", idade, curso);
    printf("Você nasceu aproximadamente em %d\n", ano_nascimento);

    return 0;
}
