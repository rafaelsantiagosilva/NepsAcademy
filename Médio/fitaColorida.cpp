// C O N C L U I D O, mas o NepsAcademy fala que certo caso de teste tá errado, sendo que não tá
#include <iostream>

using namespace std;

int contarParaEsquerda(int indexQuadrado, int *fitaColorida)
{
  for (int i = indexQuadrado; i >= 0; i--)
  {
    if (fitaColorida[i] == 0)
    {
      int distancia = indexQuadrado - i;

      if (distancia > 9)
        return 9;

      return distancia;
    }
  }
}

int contarParaDireita(int indexQuadrado, int *fitaColorida, int tamanhoDaFita)
{
  for (int i = indexQuadrado; i < tamanhoDaFita; i++)
  {
    if (fitaColorida[i] == 0)
    {
      int distancia = i - indexQuadrado;

      if (distancia > 9)
        return 9;

      return distancia;
    }
  }
}

int distanciaDoColoridoMaisProximo(int indexQuadrado, int *fitaColorida, int tamanhoDaFita)
{
  int esquerda = contarParaEsquerda(indexQuadrado, fitaColorida), direita = contarParaDireita(indexQuadrado, fitaColorida, tamanhoDaFita);

  if (esquerda < direita && esquerda != -1)
    return esquerda;
  else
    return direita;
}

int main()
{
  int qtdQuadrados = 0;
  cin >> qtdQuadrados;

  int fitaColorida[qtdQuadrados];

  for (int i = 0; i < qtdQuadrados; i++)
    cin >> fitaColorida[i];

  for (int i = 0; i < qtdQuadrados; i++)
  {
    if (fitaColorida[i] == -1)
      fitaColorida[i] = distanciaDoColoridoMaisProximo(i, fitaColorida, qtdQuadrados);
  }

  for (int i = 0; i < qtdQuadrados; i++)
    cout << fitaColorida[i] << ' ';

  return 0;
}
