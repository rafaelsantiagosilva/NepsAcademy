// C O N C L U I D O
#include <iostream>
#include <set>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  set<int> listaPresenca;
  int N;

  cin >> N;

  for (int i = 0; i < N; i++)
  {
    int alunoPresente;
    cin >> alunoPresente;
    listaPresenca.insert(alunoPresente);
  }

  cout << listaPresenca.size() << endl;
}

/*
Certa vez, numa aula, a professora passou um filme para os alunos assistirem. Durante este filme, ela passou uma lista de presença em sua sala para verificar a presença dos alunos, onde cada aluno deveria inserir apenas seu número de registro. Alguns alunos contudo, como possuem amigos que fogem da aula, decidiram ser camaradas e inseriram os números de registro de seus amigos fujões. O problema é que muitos alunos são amigos de alunos que fogem da aula e alguns números de registro acabaram sendo repetidamente inseridos na lista de presença. Além de tudo, alguns dos alunos que se esperava que não estivessem na aula de fato estavam!

A professora, ao notar que a lista de presença continha alguns números repetidos, ficou sem entender, mas decidiu dar um voto de confiança e dar presença a todos os alunos cujos números de registro estavam na lista. Como são muitos alunos na sala e muitos números com repetição, ela pediu a sua ajuda para determinar o total de alunos que receberam presença na aula.

Entrada
A primeira linha da entrada contém um número inteiro N, que informa a quantidade de números de registro que apareceram na lista de presença. Cada uma dasN linhas seguintes contém um número de registro V(i) que foi inserido na lista de presença.

Saída
Seu programa deve imprimir uma única linha, contendo apenas um número inteiro, o número de alunos que receberam presença.
*/