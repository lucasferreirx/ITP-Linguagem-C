/* Questão 1008

Escreva um programa que leia o número de um funcionário, seu número de horas trabalhadas, o valor que recebe por hora e calcula o salário desse funcionário. A seguir, mostre o número e o salário do funcionário, com duas casas decimais.

Entrada
O arquivo de entrada contém 2 números inteiros e 1 número com duas casas decimais, representando o número, quantidade de horas trabalhadas e o valor que o funcionário recebe por hora trabalhada, respectivamente.

Saída
Imprima o número e o salário do funcionário, conforme exemplo fornecido, com um espaço em branco antes e depois da igualdade. No caso do salário, também deve haver um espaço em branco após o $.

Exemplo de Entrada:
25
100
5.50

Exemplo de Saida:
NUMBER = 25
SALARY = U$ 550.00
*/

#include <stdio.h>

int main() {

    int NUMBER, horas_trabalhadas;
    float valor_hora, SALARY;

    printf("Escreva o seu numero como funcionario: ", NUMBER);
    scanf("%d", &NUMBER);

    printf("Escreva o seu numero de horas trabalhadas: ", horas_trabalhadas);
    scanf("%d", &horas_trabalhadas);

    printf("Escreva o seu valor por hora trabalhada: ", valor_hora);
    scanf("%f", &valor_hora);

    SALARY = valor_hora * horas_trabalhadas;

    printf("NUMBER = %d\n", NUMBER);
    printf("SALARY = U$ %.2f\n", SALARY);

    return 0;
}