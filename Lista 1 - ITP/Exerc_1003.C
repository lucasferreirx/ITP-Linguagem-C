/* Questão 1003

Leia dois valores inteiros, no caso para variáveis A e B. A seguir, calcule a soma entre elas e atribua à variável SOMA. A seguir escrever o valor desta variável.

Entrada
O arquivo de entrada contém 2 valores inteiros.

Saída
Imprima a mensagem "SOMA" com todas as letras maiúsculas, com um espaço em branco antes e depois da igualdade seguido pelo valor correspondente à soma de A e B. Como todos os problemas, não esqueça de imprimir o fim de linha após o resultado, caso contrário, você receberá "Presentation Error".

Exemplo de Entrada:
30
10

Exemplo de Saida:
SOMA = 40
*/

#include <stdio.h>

int main () {

    int A, B, SOMA;

    printf("Digite dois valores inteiros separados por um espaco:", A, B);
    scanf("%d %d", &A, &B);

    SOMA = A + B;

    printf("SOMA = %d\n", SOMA);

    return 0;
}