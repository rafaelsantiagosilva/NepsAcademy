// C O N C L U I D O
#include <iostream>
#include <set>

using namespace std;

int main()
{
  int qtdCasas, soma, casa1, casa2;
  set<int> casas;

  cin >> qtdCasas;
  for (int i = 0; i < qtdCasas; i++)
  {
    int n;
    cin >> n;
    casas.insert(n);
  }
  cin >> soma;

  for (auto casa : casas)
  {
    if (casas.find(soma - casa) != casas.end())
    {
      casa1 = casa;
      casa2 = soma - casa;
      break;
    }
  }

  cout << casa1 << ' ' << casa2 << endl;
}