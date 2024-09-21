// Saida correta, mas pro Neps tá dando erro

#include <bits/stdc++.h>

using namespace std;

#define FOR(i, x, y) for (int i = x; i <= y; i++)
#define MAXN 100

int salao[MAXN][MAXN];
bool visitado[MAXN][MAXN];

// entrada
int linhas, colunas;
int linhaFinal, colunaFinal;

int direcoesLinha[] = {1, -1, 0, 0};
int direcoesColuna[] = {0, 0, 1, -1};

int posicaoRobo[] = {0, 0};

void buscarVizinho(int i, int j)
{
  visitado[i][j] = true;
  // cout << "Quadrado: L - " << i << " C - " << j << endl;

  for (int k = 0; k < 4; k++)
  {
    int novaLinha = i + direcoesLinha[k];
    int novaColuna = j + direcoesColuna[k];

    if (novaLinha >= 1 && novaLinha <= linhas && novaColuna >= 1 && novaColuna <= colunas && !visitado[novaLinha][novaColuna])
    {
      if (salao[novaLinha][novaColuna] == 1) 
      {
        posicaoRobo[0] = novaLinha;
        posicaoRobo[1] = novaColuna;
        buscarVizinho(novaLinha, novaColuna);
      }
    }
  }
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> linhas >> colunas;
  cin >> posicaoRobo[0] >> posicaoRobo[1];

  memset(salao, 0, sizeof(salao));
  memset(visitado, false, sizeof(visitado));

  FOR(i, 1, linhas)
  {
    FOR(j, 1, colunas)
    {
      cin >> salao[i][j];
    }
  }

  buscarVizinho(posicaoRobo[0], posicaoRobo[1]);

  cout << posicaoRobo[0] << ' ' << posicaoRobo[1] << endl;

  return 0;
}