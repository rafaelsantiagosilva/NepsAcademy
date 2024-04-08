// C O N C L U I D O, mas mal otimizado
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
     int N = 0, i = 0, j = 0;
     scanf("%d", &N);

     int registros[N], alunos = 0;
     for (i = 0; i < N; i++)
     {
          scanf("%d", &registros[i]);
     }

     bool repetiu = false;
     for (i = N - 1; i >= 0; i--)
     {
          repetiu = false;

          for (j = 0; j < i; j++)
          {
               if (registros[i] == registros[j])
               {
                    repetiu = true;
               }
          }

          if (repetiu == false)
          {
               alunos++;
          }
     }

     printf("%d", alunos);

     return 0;
}

/*
Frequência na Aula
Certa vez, numa aula, a professora passou um filme para os alunos assistirem. Durante este filme, ela passou uma lista de presença em sua sala para verificar a presença dos alunos, onde cada aluno deveria inserir apenas seu número de registro. Alguns alunos contudo, como possuem amigos que fogem da aula, decidiram ser camaradas e inseriram os números de registro de seus amigos fujões. O problema é que muitos alunos são amigos de alunos que fogem da aula e alguns números de registro acabaram sendo repetidamente inseridos na lista de presença. Além de tudo, alguns dos alunos que se esperava que não estivessem na aula de fato estavam!

A professora, ao notar que a lista de presença continha alguns números repetidos, ficou sem entender, mas decidiu dar um voto de confiança e dar presença a todos os alunos cujos números de registro estavam na lista. Como são muitos alunos na sala e muitos números com repetição, ela pediu a sua ajuda para determinar o total de alunos que receberam presença na aula.

Entrada
A primeira linha da entrada contém um número inteiro N, que informa a quantidade de números de registro que apareceram na lista de presença. Cada uma das N linhas seguintes contém um número de registro Vi que foi inserido na lista de presença.

Saída
Seu programa deve imprimir uma única linha, contendo apenas um número inteiro, o número de alunos que receberam presença
*/