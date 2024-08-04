// C O N C L U Í D O

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
     // Lendo proporção do quadrado
     int N = 0, i = 0, j = 0;
     scanf("%d", &N);

     // Lendo quadrado
     int quadrado[N][N];
     for (i = 0; i < N; i++)
          for (j = 0; j < N; j++)
               scanf("%d", &quadrado[i][j]);

     // Processamento
     int somaLinha[N], somaColuna[N], somaDiagonalEsq = 0, somaDiagonalDir = 0;

     for (i = 0; i < N; i++)
     {
          somaLinha[i] = 0;
          somaColuna[i] = 0;
     }

     bool soma = true;

     for (i = 0; i < N; i++)
     {
          for (j = 0; j < N; j++)
               somaColuna[i] += quadrado[j][i];

          if (i > 0)
          {
               if (somaColuna[i] != somaColuna[i - 1])
               {
                    soma = false;
                    break;
               }
          }
     }

     for (i = 0; i < N; i++)
     {
          for (j = 0; j < N; j++)
               somaLinha[i] += quadrado[i][j];

          if (i > 0)
          {
               if (somaLinha[i] != somaLinha[i - 1])
               {
                    soma = false;
                    break;
               }
          }
     }

     for (i = 0; i < N; i++)
          somaDiagonalEsq += quadrado[i][i];

     for (i = 0; i < N; i++)
          for (j = 0; j < N; j++)
               if ((j + i) == N - 1)
                    somaDiagonalDir += quadrado[i][j];

     if (somaDiagonalDir != somaDiagonalEsq)
          soma = false;

     for (i = 0; i < N; i++)
     {
          if (somaLinha[i] != somaColuna[i])
               soma = false;

          if (somaLinha[i] != somaDiagonalDir || somaLinha[i] != somaDiagonalEsq)
               soma = false;

          if (somaColuna[i] != somaDiagonalDir || somaColuna[i] != somaDiagonalEsq)
               soma = false;
     }

     if (soma)
          printf("%d", somaDiagonalDir);

     else
          printf("%d", -1);

     return 0;
}

/*
Quadrado Mágico (OBI 2007)
Chama-se de quadrado mágico um arranjo, na forma de um quadrado, de N×N números inteiros tal que todas as linhas, colunas e diagonais têm a mesma soma.

Por exemplo, o quadrado abaixo

276
951
438
​
é um quadrado mágico de soma 15, pois todas as linhas (2+7+6 = 15, 9+5+1 = 15 e 4+3+8 = 15), colunas (2 + 9 + 4 = 15, 7 + 5 + 3 = 15 e 6 + 1 + 8 = 15) e diagonais (2 + 5 + 8 = 15 e 6 + 5 + 4 = 15) têm a mesma soma (15).

Escreva um programa que, dado um quadrado, determine se ele é magico ou não e qual a soma dele (caso seja mágico).

Entrada
A entrada contém um único conjunto de testes, que deve ser lido do dispositivo de entrada padrão. A primeira linha da entrada de cada caso de teste contém um inteiro N. As N linhas seguintes contêm N inteiros cada, separados por exatamente um espaço em branco. Os inteiros dentro do quadrado são todos maiores que 0 (zero) e menores que 1.000.

Saída
Seu programa deve imprimir, na saída padrão, uma única linha com um inteiro representando a soma do quadrado mágico ou -1 caso o quadrado não seja mágico.
*/