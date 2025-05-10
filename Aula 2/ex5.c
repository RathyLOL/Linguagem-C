#include <stdio.h>

int main() {

    int numero = 2;

    printf("Digite aqui seu número: ");
    scanf("%d", &numero);


    
    (numero % 2 == 0) ? printf("O seu número(%d), é par.\n") : printf("O seu número(%d) é impar.\n");

    return 0;

}