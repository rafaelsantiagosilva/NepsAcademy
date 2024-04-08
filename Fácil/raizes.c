// C O N C L U I D O
#include <stdio.h>
#include <math.h>

int main(void)
{
     int qtdNumeros = 0, i = 0;
     scanf("%d", &qtdNumeros);

     float numeros[qtdNumeros];

     for (i = 0; i < qtdNumeros; i++)
     {
          scanf("%f", &numeros[i]);
     }

     for (i = 0; i < qtdNumeros; i++)
     {
          float raiz = sqrt(numeros[i]);
          printf("%.4f \n", raiz);
     }

     return 0;
}

/*
Raízes
Seu professor lhe passou um exercício onde você deve encontrar a raiz quadrada de vários números, como você não quer perder tempo com essa tarefa tosca e sem sentido você resolveu fazer um programa que dados N números ele retorna a raiz quadrada de cada um desses números
*/