/* Questão 1007

Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).

Entrada
O arquivo de entrada contém 4 valores inteiros.

Saída
Imprima a mensagem DIFERENCA com todas as letras maiúsculas, conforme exemplo abaixo, com um espaço em branco antes e depois da igualdade.

Exemplo de Entrada:
5
6
7
8

Exemplo de Saida:
DIFERENCA = -26
*/

#include <stdio.h>

int main() {
    int A, B, C, D, DIFERENCA;

    printf("Digite quatro valores inteiros a seguir separando eles por espacos: ", A, B, C, D);
    scanf("%d %d %d %d", &A, &B, &C, &D);

    DIFERENCA = (A * B - C * D);

    printf("DIFERENCA = %d\n", DIFERENCA);

    return 0;
}