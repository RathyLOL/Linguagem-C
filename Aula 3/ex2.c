# include <stdio.h>

int main() {
    
    char nome[15];
    int idade;

    printf("Qual é o seu nome? ");
    scanf("%s", nome);

    printf("Qual é a sua idade? ");
    scanf("%d", &idade);

    if (idade >= 65) {
        printf("Olá! %s Você é um(a) idoso.", nome);
    }
    else if (idade >= 18) {
        printf("olá! %s Você é um(a) adulto.", nome);
    }
    else if (idade >= 13) {
        printf("olá! %s Você é um(a) adolescente.", nome);
    }
    else {
        printf("Olá! %s Você é uma criança.", nome);
    }

    return 0;
}