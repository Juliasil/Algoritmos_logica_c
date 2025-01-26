#include<cstdio>
#include <string.h> //Para usar a função strcpy

int main(){
    float salario;
    int idade;
    char nome[20];

    //salario = 1000.50;
    //idade = 18;
    //strcpy(nome, "Juliana da Silveira"); //Copia a string para o array de caracteres

    printf("Digite o seu nome.: ");
    scanf("%s", nome);
    printf("\nDigite a sua idade.: ");
    scanf("%d", &idade);
    printf("\nDigite o seu salario.:");
    scanf("%f", &salario);


    printf("\n O nome é = %s", nome);
    printf("\n A idade é = %d", idade);
    printf("\n o salario é = %f", salario);
    printf("\n.................Fim.................");
    return 0;


}