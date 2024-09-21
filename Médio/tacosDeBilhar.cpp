#include <iostream>
#include <map>

using namespace std;

int main()
{
  int qtdTacos, qtdTacosFabricados = 0;
  map<int, int> tacos;

  cin >> qtdTacos;
  for (int i = 0; i < qtdTacos; i++)
  {
    int taco;
    cin >> taco;

    if (tacos.find(taco) == tacos.end())
    {
      tacos[taco] = 2;
      qtdTacosFabricados += 2;
    }
  }

  cout << qtdTacosFabricados;

  return 0;
}