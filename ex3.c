#include <stdio.h>

int main() {

    char nome[15];
    float kilos;
    float altura;
    float imc;

    printf("Qual é o seu nome? ");
    scanf("%s", nome);

    printf("Quantos KG você pesa? ");
    scanf("%f", &kilos);

    printf("Qual é a sua altura? ");
    scanf("%f", &altura);

    imc = kilos / (altura + altura), imc;

    printf("%s, seu IMC é %.2f\n", nome, imc);

    return 0;

}