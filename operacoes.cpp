#include <stdio.h>
int main() {
    float num1, num2, multiplicacao, divisao, soma, subtracao;
    //num1 = 10;
    //num2 = 5;

    printf("Digite o numero 1.: ");
    scanf("%f", &num1);
    printf("Digite o segumdo numero.: ");
    scanf("%f", &num2);

    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
    divisao = num1 / num2;

    printf("\nsoma: %f", soma);
    printf("\nsubtracao: %f", subtracao);
    printf("\nmultiplicacao: %f", multiplicacao);
    printf("\ndivisao: %f", divisao);
    printf("\n\n\n..........Fim..........");
    return 0;

}