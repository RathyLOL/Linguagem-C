#include <stdio.h>

int main() {

    float valor;
    float valorDesconto, valorParcela, comissaov, comissaop;
    char nome[100];

    printf("Digite o nome do seu produto: ");
    scanf("%s", nome);

    printf("Digite aqui o valor do produto: ");
    scanf("%f", &valor);

    valorDesconto = valor * 0.90; //valor do produto com 10% de desconto
    valorParcela = valor / 12; //valor das parcelas do produto
    comissaov = valorDesconto * 0.05; //valor da comissão do vendedor
    comissaop = valor * 0.05; //valor da comissão do vendedor com o produto parcelado

    printf("Confira a tabela de Descontos abaixo!\n");
    printf("Nome do seu produto: %s\n", nome);
    printf("Valor do produto: R$ %.2f\n", valor);
    printf("Valor do produto com Desconto: R$ %.2f\n", valorDesconto);
    printf("Valor do produto parcelado (Sem juros de 12x): R$ %.2f\n", valorParcela);
    printf("Valor da comissão do vendedor (à vista): R$ %.2f\n", comissaov);
    printf("Valor da comissão do vendedor (Parcelado): R$ %.2f", comissaop);

    return 0;

}