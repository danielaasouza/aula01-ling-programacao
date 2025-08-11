#include <stdio.h>

int main() {
    float celsius, fahr, metros, km, kg, lb;

    printf("=== CONVERSOR DE UNIDADES ===\n");

    // Temperatura
    printf("Digite a temperatura em ºC: ");
    scanf("%f", &celsius);
    fahr = (celsius * 9 / 5) + 32;
    printf("A temperatura em ºF é: %.2f\n", fahr);

    // Distância
    printf("Digite a distância em metros: ");
    scanf("%f", &metros);
    km = metros / 1000;
    printf("A distância convertida em quilômetros é: %.2f\n", km);

    //Peso
    printf("Digite o peso em quilos: ");
    scanf("%f", &kg);
    lb = kg * 2.2046;
    printf("O peso em libras é: %.2f\n", lb);

return 0;

}
