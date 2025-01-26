//Problema:
//O Custo ao consumidor de um carro novo, 
//é a soma de custo de fabrica com a porcentagem do revendedor 
//e com o custo dos impostos(Aplicados ao custo de fábrica).
//Supondo que a percentagem do revendedor seja de 25% do custo 
//de fábrica e que impostos custam 45% do custo de fabrica, 
//faça um algoritmo que leia o valor de custo de fábrica e determine
//o preço final do automóvel(custo ao consumidor).

#include<cstdio>

int main(){
   float custo_fabrica, per_revendedor, impostos, preco_final;
   printf("\nEntre com o custo de fabrica do automóvel: ");
   scanf("%f", &custo_fabrica);
   //custo_fabrica =  40000;
   per_revendedor = (25 * custo_fabrica) / 100;
   impostos = (45 * custo_fabrica) / 100;
   preco_final = custo_fabrica + per_revendedor + impostos;
   printf("\nO custo de fabrica é = .........: %f", custo_fabrica);
   printf("\nA percentagem do revendedor é =.: %f", per_revendedor);
   printf("\nO valor dos impostos é = .......: %f", impostos);
   printf("\nO preço final do automóvel é = .: %f", preco_final);
   printf("\n\n\n.................Fim.................");
   return 0;
}