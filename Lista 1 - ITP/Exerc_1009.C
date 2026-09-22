/* Questão 1009

Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de vendas efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, informar o total a receber no final do mês, com duas casas decimais.

Entrada
O arquivo de entrada contém um texto (primeiro nome do vendedor) e 2 valores de dupla precisão (double) com duas casas decimais, representando o salário fixo do vendedor e montante total das vendas efetuadas por este vendedor, respectivamente.

Saída
Imprima o total que o funcionário deverá receber, conforme exemplo fornecido.

Exemplo de Entrada:
JOAO
500.00
1000.00

Exemplo de Saida:
TOTAL = R$ 650.00
*/


#include <stdio.h>

int main() {

    char Nome[50];
    double salario_fixo, total_vendas, salario;

    printf("Qual o seu nome?", Nome);
    scanf("%s", &Nome);

    printf("Qual o seu salario?", salario_fixo);
    scanf("%lf", &salario_fixo);
    
    printf("Quanto voce vendeu esse mes?", total_vendas);
    scanf("%lf", &total_vendas);

    salario = salario_fixo + 15 * total_vendas / 100;

    printf("TOTAL = R$ %.2lf", salario);

    return 0;
}