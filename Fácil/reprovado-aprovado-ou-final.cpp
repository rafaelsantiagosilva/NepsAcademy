// C O N C L U I D O
#include <iostream>

using namespace std;

int main(void)
{
     int N1 = 0, N2 = 0;
     cin >> N1 >> N2;

     int P1 = 2, P2 = 3;

     int media = (N1 * P1 + N2 * P2) / (P1 + P2);

     if (media >= 7)
     {
          cout << "Aprovado";
     }
     else if (media < 3)
     {
          cout << "Reprovado";
     }
     else
     {
          cout << "Final";
     }
     return 0;
}

/*
Reprovado, Aprovado ou Final.
Bino obteve média N1 na primeira etapa do semestre e média N2 na segunda etapa do semestre. Bino não sabe sua situação e quer sua ajuda para saber se ele está aprovado, reprovado ou de prova final.

A nota final de Bino é calculada utilizando uma média ponderada onde o peso da N1 é 2 e o peso da N2 é 3. Caso a média final seja maior ou igual a 7, Bino está aprovado. Caso a média seja menor que 3, Bino está reprovado. Caso Bino não esteja reprovaou aprovado, Bino terá que fazer a prova final.

Faça um programa para ler as duas notas de Bino e imprima qual sua situação.

Entrada
A entrada consiste de duas linhas. A primeira linha contém um real representando a nota N1 . A segunda linha contém um real representando a nota N2.

Saída
A saída consiste de uma linha. Caso Bino esteja aprovado, imprima "Aprovado". Caso Bino esteja reprovado, imprima "Reprovado". Caso Bino não esteja reprovado ou aprovado, imprima "Final".
*/