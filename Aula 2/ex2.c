#include <stdio.h>

int main() {

    char nome[15];
    float nota1;
    float nota2;
    float notafinal;



    printf("Qual o seu nome? ");
    scanf("%s", nome);

    printf("Qual a sua primeira nota? ");
    scanf("%f", &nota1);

    printf("Qual a sua segunda nota? ");
    scanf("%f", &nota2);

    notafinal = (nota1 + nota2) / 2;

    printf("O aluno %s obteve media final: %f\n", nome, notafinal);

    return 0;

}