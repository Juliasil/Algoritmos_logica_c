/*Problema:Duas variaveis(A e B)possuem valores distintos
(A=5 e B=10).Crie um algoritmo que armazena esses dois valores
nessas duas variáveis, e efetue a troca dos valores de forma
que a variável A passe a possuir o valor da variável B e 
que a variável B passe a possuir o valor da variável A.
Por fim apresentar os valores trocado.*/

#include<cstdio>

int main(){
    int A, B , Auxiliar;
    A = 5;
    B = 10;
    Auxiliar = A;
    A = B;
    B = Auxiliar;

    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("\n\n\n-------Fim-------\n\n\n");
}