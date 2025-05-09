#include <stdio.h>

int main() {

    float primeiro;
    float segundo;
    float resultado;

    printf("Digite o primeiro ângulo: ");
    scanf("%f", &primeiro);

    printf("Digite o segundo ângulo: ");
    scanf("%f", &segundo);

    resultado = 180 - (primeiro + segundo);

    printf("O terceito ângulo do triangulo é: %.2f\n", resultado);

    return 0;

}