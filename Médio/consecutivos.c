// I N C O R R E T O, mas a saída tá certa
#include <stdio.h>

int main(void)
{
     int quantidadeValores = 0, i = 0, num = 0, anterior = 0;
     scanf("%d", &quantidadeValores);

     int contadorValoresConsecutivos = 0, qtdConsecutivos = 0;

     for (i = 0; i < quantidadeValores; i++)
     {
          scanf("%d", &num);
          if (i > 0)
          {
               if (num == anterior)
               {
                    contadorValoresConsecutivos++;
               }
               else if (anterior != num || i == quantidadeValores - 1)
               {
                    if (contadorValoresConsecutivos > qtdConsecutivos)
                    {
                         qtdConsecutivos = contadorValoresConsecutivos;
                    }
                    contadorValoresConsecutivos = 1;
               }
          }

          anterior = num;
     }

     printf("%d", qtdConsecutivos);

     return 0;
}

/*
Consecutivos
Num sorteio que distribui prêmios, um participante inicialmente sorteia um inteiro N e depois N valores. O número de pontos do
participante é o tamanho da maior sequência de valores consecutivos iguais. Por exemplo, suponhamos que um participante sorteia
N=11 e, nesta ordem, os valores 30,30,30,30,40,40,40,40,40,30,30

Então, o participante ganha 5 pontos, correspondentes aos 5 valores 40 consecutivos. Note que o participante sorteou 6
valores iguais a 30, mas nem todos são consecutivos.

Sua tarefa é ajudar a organização do evento, escrevendo um programa que determina o número de pontos de um participante.

Entrada
A primeira linha da entrada contém um inteiro N, o número de valores sorteados. A segunda linha contém N valores, V1, V2, VN...
​, na ordem de sorteio, separados por um espaço em branco.

Saída
Seu programa deve imprimir apenas uma linha, contendo apenas um inteiro, indicando o número de pontos do participante.
*/