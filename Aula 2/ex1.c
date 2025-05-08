#include <stdio.h>

int main() {

    char nome[15];
    int idade;
    float altura;
    char genero;

    printf("Qual é seu nome? ");
    scanf("%s", nome);

    printf("Qual é a sua idade? ");
    scanf("%d", &idade);

    printf("Qual a sua altura?");
    scanf("%f", &altura);

    printf("Qual é seu gênero?");
    scanf(" %c", &genero);

    printf("Bem vindo(a), %s!\n", nome);
    printf("Seu Perfil\n");

    printf("%s\n", nome);
    printf("%d\n", idade);
    printf("%.2f\n", altura);
    printf("%c\n", genero);

    return 0;

}