#include <stdio.h>

int main() {

    int primeiro;
    int segundo;
    int opcao;
    int sub;
    int soma;

    printf("Digite o primeiro numero: ");
    scanf("%d", &primeiro);

    printf("Digite o segundo numero: ");
    scanf("%d", &segundo);

    printf("1 - Quero somar");
    prinft("2 - Quero subtrair");
    printf("3 - Quero multiplicar");
    printf("4 - Quero dividir");

    printf("Digite qual opção você irá usar em seu cálculo: ");
    scanf("%d", opcao);

    switch (opcao) {
        case 1:
            soma = primeiro + segundo;
            printf("O resultado da sua soma é: %d", soma);
            break;
        case 2:
            sub = primeiro - segundo;
            printf("O resultado da sua subtração é: %d", sub);
            break;
    }

    return 0;
}