#include <stdio.h>

int main() {
    float n1,n2,soma,sub,mul,div;

    printf("=== CALCULADORA BÁSICA ===\n");

    printf("Digite o Primeiro número: ");
    scanf("%f", &n1);

    printf("Digite o Segundo número: ");
    scanf("%f", &n2);
    
    // Operações
    soma = n1 + n2;
    sub = n1 - n2;
    mul = n1 * n2;
    div = n1 / n2;

    printf("A soma dos números é %.2f\n", soma);
    printf("A subtração dos números é %.2f\n", sub);
    printf("A multiplicação dos números é %.2f\n", mul);
    if (n2 != 0)
        printf("A divisão dos números é %.2f\n", div);
    else
        printf("Não é possível dividir por zero\n");    

    return 0;
}
