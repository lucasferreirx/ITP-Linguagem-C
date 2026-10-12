/* Questão 2450 - Matriz Escada

Joãozinho está aprendendo sobre matrizes e como deixá-las na forma escada. Escreva um
programa que determine se o resultado realmente está no formato correto.

Uma matriz está na forma escada quando, para cada linha:
- Se a linha só possui zeros, então todas as linhas abaixo também só possuem zeros.
- Caso contrário, seja X o elemento diferente de zero mais à esquerda da linha; então,
  para todas as linhas abaixo da linha de X, todos os elementos nas colunas à esquerda
  de X e na coluna de X são iguais a zero.

Entrada
A primeira linha possui dois inteiros N e M (1 <= N, M <= 500), as dimensões da matriz.
Cada uma das N linhas seguintes contém M inteiros não negativos (0 <= Mij <= 10^5).

Saída
Uma única linha, contendo 'S' caso a matriz esteja no formato escada, ou 'N' caso contrário.

Exemplo 1 - Entrada:        Saida:
4 6                         S
1 2 9 9 9 9
0 0 3 9 9 9
0 0 0 0 5 9
0 0 0 0 0 6

Exemplo 2 - Entrada:        Saida:
5 8                         S
0 5 1 0 3 2 2 0
0 0 0 0 4 0 1 2
0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0

Exemplo 3 - Entrada:        Saida:
5 5                         N
1 1 2 3 4
0 1 1 4 5
0 1 2 3 6
0 0 0 2 0
0 0 0 0 0
*/
