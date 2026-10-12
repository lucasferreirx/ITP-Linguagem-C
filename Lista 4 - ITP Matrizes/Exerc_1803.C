/* Questão 1803 - Matring

Matring é uma mistura de Matriz e String. Foi desenvolvida pela UNILA (União dos
Nerds para Integração da Lógica e da Aventura) para manter mensagens seguras de escutas.

A primeira e última coluna de uma matring guardam a chave para traduzi-la na mensagem
original. As colunas restantes representam uma string codificada em ASCII, uma coluna
por caractere.

Para uma mensagem com N caracteres, a matring é uma matriz 4x(N+2) de dígitos. Cada
coluna é lida como um número de 4 dígitos; a sequência de cima para baixo equivale a
uma sequência da esquerda para a direita.

Seja o primeiro número F, o último número L e os restantes uma sequência Mi (1 <= i <= N).
A primeira coluna é indexada por zero.

Para decodificar: Ci = (F * Mi + L) mod 257, onde Ci é o caractere ASCII na posição i
da mensagem original.

Entrada
A entrada é uma matring: uma matriz 4x(N+2) de dígitos (0 a 9) com 0 < N < 80.

Saída
Uma única linha com a string decodificada. Inclua o fim-de-linha após a string.

Exemplo de Entrada:        Exemplo de Saida:
41805                      OBI
99934
39127
23659

Exemplo de Entrada:        Exemplo de Saida:
5686702                    UNILA
0531447
5115038
2795214

Exemplo de Entrada:        Exemplo de Saida:
28665943                   Hodor!
68409984
86877400
51804393
*/
