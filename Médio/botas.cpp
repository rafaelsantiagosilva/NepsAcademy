// C O N C L U I D O

#include <iostream>
#include <map>
using namespace std;

#define FOR(i, x, y) for (int i = 0; i < y; i++)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int qtdBotas = 0;
    cin >> qtdBotas;

    map<int, pair<int, int>> botas; // Mapeia o tamanho para um par de contadores (E, D)
    int paresCompletos = 0;

    FOR(i, 0, qtdBotas)
    {
        int tamanhoDaBota;
        char lado;

        cin >> tamanhoDaBota >> lado;

        if (botas.find(tamanhoDaBota) == botas.end()) // Se não existir...
            botas[tamanhoDaBota] = make_pair(0, 0);   // Inicializa os contadores (E, D)

        if (lado == 'E')
            botas[tamanhoDaBota].first++;
        else
            botas[tamanhoDaBota].second++;

        if (botas[tamanhoDaBota].first > 0 && botas[tamanhoDaBota].second > 0)
        {
            paresCompletos++;
            botas[tamanhoDaBota].first--;
            botas[tamanhoDaBota].second--;
        }
    }

    cout << paresCompletos;

    return 0;
}
