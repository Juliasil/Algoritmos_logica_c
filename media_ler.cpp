#include <cstdio>

int main()
{
    float nota1, nota2, calc_media;
    printf("Digite a primeira nota ");
    scanf("%f",&nota1); //nota1 = 5;
    printf("Digite a segunda nota ");
    scanf("%f",&nota2); //nota2 = 7;
    calc_media = (nota1 + nota2) / 2;
    printf("A media é = %f",calc_media);
    printf("\n.................Fim.................");// \n nova linha
    return 0;

}