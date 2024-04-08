// C O N C L U Í D O
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
     int posicaoHelicoptero = 0, posicaoFugitivo = 0, posicaoPolicial = 0, direcaoFugitivo = 0;
     char resultado = 'N';

     scanf("%d%d%d%d", &posicaoHelicoptero, &posicaoPolicial, &posicaoFugitivo, &direcaoFugitivo);

     // Sentido horário
     if (direcaoFugitivo == -1)
     {
          while (resultado != 'S')
          {

               if (posicaoFugitivo == 0)
               {
                    posicaoFugitivo = 15;
               }

               else if (posicaoFugitivo <= 15)
               {
                    posicaoFugitivo--;
               }

               if (posicaoFugitivo == posicaoHelicoptero)
               {
                    resultado = 'S';
                    break;
               }

               else if (posicaoFugitivo == posicaoPolicial)
               {
                    resultado = 'N';
                    break;
               }
          }
     }

     // Sentido anti-horário
     else if (direcaoFugitivo == 1)
     {
          while (resultado != 'S')
          {
               if (posicaoFugitivo == 15)
               {
                    posicaoFugitivo = 0;
               }

               else if (posicaoFugitivo >= 0)
               {
                    posicaoFugitivo++;
               }

               if (posicaoFugitivo == posicaoHelicoptero)
               {
                    resultado = 'S';
                    break;
               }

               else if (posicaoFugitivo == posicaoPolicial)
               {
                    resultado = 'N';
                    break;
               }
          }
     }

     printf("%c", resultado);

     return 0;
}

/*
Fuga com Helicóptero
Um fugitivo, um helicóptero e um policial estão em posições distintas numa pista circular, exatamente como a mostrada na figura
ao lado, com dezesseis posições numeradas de 0 a 15 em direção anti-horária.

O helicóptero e o policial ficam sempre parados. O objetivo do fugitivo é chegar no helicóptero sem passar pelo policial antes,
claro. Ele pode decidir correr na direção horária, ou na direção anti-horária.

Neste problema, dadas as posições do helicóptero, do policial e do fugitivo, e a direção em que o fugitivo decide correr, seu
programa deve dizer se ele vai ou não conseguir fugir! Na figura, se o fugitivo decidir correr na direção horária, ele consegue
fugir; se decidir correr na direção anti-horária, ele vai ser preso antes de chegar no helicóptero!

Entrada
A entrada consiste de uma linha com quatro inteiros: H, P, F e D, representando, respectivamente, as posições do helicóptero,
do policial e do fugitivo, e a direção em que o fugitivo corre, -1 para horário e 1 para anti-horário.

Saída
Seu programa deve imprimir uma linha contendo o caractere "S" se o fugitivo consegue fugir, ou "N" caso contrário
*/