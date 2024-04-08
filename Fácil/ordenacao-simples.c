// ...
#include <stdio.h>

int main(void)
{
     int N = 0, min_idx = 0, temp = 0;
     scanf("%d", &N);

     int numeros[N], i = 0, j = 0;

     for (i = 0; i < N; i++)
     {
          scanf("%d", &numeros[i]);
     }

     for (i = 0; i < N - 1; i++)
     {
          min_idx = i;
          for (j = i + 1; j < N; j++)
          {
               if (numeros[j] < numeros[min_idx])
               {
                    min_idx = j;
               }
          }
          temp = numeros[min_idx];
          numeros[min_idx] = numeros[i];
          numeros[i] = temp;
     }

     for (i = 0; i < N; i++)
     {
          printf("%d ", numeros[i]);
     }
     return 0;
}

/*
Ordenação Simples
Imprima os termos de uma sequência, do menor para o maior.

Entrada
A primeira linha da entrada contém um inteiro N, representando o número de elementos da sequência.

A segunda linha contém N inteiros: os N números da sequência

Saída
Seu programa deve gerar uma única linha: os N números da entrada, em ordem crescente
*/