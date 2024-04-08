// C O N C L U I D O
#include <stdio.h>

int main(void)
{
     int N = 0, i = 0;
     scanf("%d", &N);
     int numeros[N];

     for (i = 0; i < N; i++)
     {
          scanf("%d", &numeros[i]);
     }

     int quantidadeCem = 0;

     for (i=0; i < N; i++)
     {
          if (i < N-2)
          {
               if (numeros[i] == 1)
               {
                    if (numeros[i+1] == 0)
                    {
                         if (numeros[i+2] == 0)
                         {
                              quantidadeCem++;
                         }
                    }
               }
          }
     }

     printf("%d", quantidadeCem);
     return 0;
}
/*
Código (OBI 2015)
Gabriel inventou um código para representar números naturais, usando uma sequência de zeros e uns. Funciona assim, o número natural é representado pela quantidade de vezes que o padrão "100" aparece na sequência.

Por exemplo, na sequência 11101001010011110, o padrão aparece duas vezes e na sequência 11101010111110111010101 ele não aparece nenhuma vez. Você deve ajudar Gabriel implementar um programa que, dada a sequência de zeros e uns, calcule quantas vezes o padrão "100" aparece nela.

Entrada
A primeira linha da entrada contém um inteiro N, o tamanho da sequência. A segunda linha contém a sequência de N zeros e uns, separados por espaço em branco.

Saída
Seu programa deve imprimir um inteiro, quantas vezes o padrão "100" aparece na sequência.
*/