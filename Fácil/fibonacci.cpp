// C O N C L U I D O
#include <iostream>

using namespace std;

int main(void)
{
     int N = 0;
     cin >> N;
     N++;
     int sequencia[N];
     sequencia[0] = 1;
     sequencia[1] = 1;

     for (int i = 2; i < N; i++)
     {
          sequencia[i] = sequencia[i - 1] + sequencia[i - 2];
     }

     cout << sequencia[N - 1];

     return 0;
}

/*
Fibonacci
Uma famosa sequência matemática é a sequência de Fibonacci, está sequência é definida por:

fib(0)=fib(1)=1

fib(n)=fib(n−1)+fib(n−2)

Escreva um programa que dado N retorna o n-ésimo número de Fibonacci.

Entrada
A entrada contem um único número N.

Saída
O valor do n-ésimo número de Fibonacci.
*/