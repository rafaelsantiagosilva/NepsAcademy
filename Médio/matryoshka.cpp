// C O R R E T O, mas mal OTIMIZADO DE NOVO!!! (até em c++? T-T)

#include <iostream>
using namespace std;

int main(void)
{
     int N = 0;
     cin >> N;

     int bonecas[N], bonecasIniciais[N], bonecasForaDeOrdem[N], temp, qtdBonecasForaDeOrdem=0;
     for (int i = 0; i < N; i++)
     {
          cin >> bonecas[i];
          bonecasIniciais[i] = bonecas[i];
          bonecasForaDeOrdem[i] = -1;
     }

     // Ordenando as bonecas
     for (int i = 0; i < N; i++)
     {
          for (int j = 0; j < N; j++)
          {
               if (bonecas[i] < bonecas[j])
               {
                    temp = bonecas[i];
                    bonecas[i] = bonecas[j];
                    bonecas[j] = temp;
               }
          }
     }

     // Verificando quantas estão fora de ordem
     for (int i = 0; i < N; i++)
     {
          if (bonecas[i] != bonecasIniciais[i])
          {
               qtdBonecasForaDeOrdem++;
               bonecasForaDeOrdem[i] = bonecas[i];
          }
     }

     cout << qtdBonecasForaDeOrdem;

     if (qtdBonecasForaDeOrdem > 0)
     {
          cout << "\n";
          for (int i = 0; i < N; i++)
          {
               if (bonecasForaDeOrdem[i] != -1)
               {
                    cout << bonecasForaDeOrdem[i] << " ";
               }
          }
     }

     return 0;
}

/*
Matryoshka
Bia acabou de voltar de viagem da Rússia e, como não poderia faltar, trouxe várias Matryoshkas na mala, aquelas bonecas
russas que ficam uma dentro da outra. Sendo uma jovem extremamente organizada, ela guarda as bonecas em sua estante, ordenadas
da menor para a maior.

Seus irmãos, no entanto, adoram deixá-la com raiva, e, por isso, bagunçam a ordem das bonecas toda vez que Bia sai de casa.
Pela sua obsessão com a ordem das coisas, toda vez que chega em casa, Bia coloca as bonecas de volta em ordem.

Como ela já está ficando cansada disso, decidiu que irá sempre reorganizá-las com o menor esforço possível. Para isso, ela
as ordenará da seguinte forma: irá recolher todas as bonecas que estão fora do lugar e depois posicioná-las, uma a uma, no
local correto. Se duas bonecas são do mesmo tamanho, a ordem delas não importa, e Bia sempre quer recolher a menor quantidade
possível delas.

Sabendo que terá que fazer isso toda vez que chega em casa, ela decidiu que fará um programa para auxiliá-la a descobrir quais
bonecas irá recolher.

Entrada
A entrada consiste de duas linhas. A primeira linha tem um único inteiro N: a quantidade de bonecas de Bia. A segunda tem N
inteiros: os tamanhos das bonecas na ordem em que seus irmãos deixaram.

Saída
Seu programa deve gerar duas linhas. A primeira deve conter um único inteiro: a quantidade de bonecas que Bia deverá recolher.
A segunda deve conter, em ordem crescente, os tamanhos de cada uma das bonecas a serem recolhidas.

Subtask 1 (30 pontos)
•1≤N≤10^5

•Todas as alturas das bonecas são inteiros distintos entre 1 e N.

Subtask 2 (70 pontos)
•1≤N≤10^5

•Todas as alturas das bonecas são inteiros positivos menores que
10^9.
*/