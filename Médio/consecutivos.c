// C O N C L U I D O
#include <stdio.h>

int main()
{
  int N, seqAtual = 1, seqMaior = 1, num, anterior;

  scanf("%d", &N);

  for (int i = 0; i < N; i++)
  {
    scanf("%d", &num);
    if (i > 0)
    { // não verifica para i=0, já que não há um anterior nesse caso
      if (anterior == num)
        seqAtual++;
      if (anterior != num || i == N - 1)
      { // verifica se a sequencia acabou ou se é o ultimo numero lido
        if (seqAtual > seqMaior)
          seqMaior = seqAtual;
        seqAtual = 1;
      }
    }
    anterior = num;
  }

  printf("%d\n", seqMaior);

  return 0;
}