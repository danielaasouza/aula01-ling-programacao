#include <stdio.h>

int main() {
    float n1, n2, n3, n4, media;

    printf("=== ANÁLISE DE NOTAS ===\n");

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    printf("Digite a quarta nota: ");
    scanf("%f", &n4);

    media = (n1+n2+n3+n4) / 4;
    printf("A média das notas é igual a: %.2f\n", media);

    if(media >= 7.0)
       printf("O aluno foi aprovado!\n");
    else
       printf("O aluno foi reprovado!\n");   

return 0;
}
