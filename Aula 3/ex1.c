#include <stdio.h>

int main() {
    
    int nascimento;
    int atual;
    int idade;

    printf("Digite o seu ano de nascimento: ");
    scanf("%d", &nascimento);

    printf("Digite o ano atual em que estamos: ");
    scanf("%d", &atual);

    idade = atual - nascimento;

    if (idade >= 18) {
        printf("Você completa %d em %d e poderá tirar a carteira.\n", idade, atual);    
    } 
    else {
        printf("Você tem %d e não irá poder tirar a carteira.\n", idade);
    }

    return 0;
}