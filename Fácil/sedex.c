// C O N C L U I D O
#include <stdio.h>
#include <math.h>

int main(void)
{
     int diametroBola = 0;
     scanf("%d", &diametroBola);

     int alturaCaixa = 0, larguraCaixa = 0, profundidadeCaixa = 0;
     scanf("%d%d%d", &alturaCaixa, &larguraCaixa, &profundidadeCaixa);

     if (diametroBola <= alturaCaixa && diametroBola <= larguraCaixa && diametroBola <= profundidadeCaixa)
     {
          printf("S");
     }
     else
     {
          printf("N");
     }

     return 0;
}

/*
Sedex
A Copa do Mundo de 2010 será realizada na Africa do Sul. Bolas de futebol são muito fáceis de transportar, já que elas saem das fábricas vazias e só são enchidas somente pelas lojas ou pelos consumidores finais. Infelizmente o mesmo não pode ser dito das bolas de boliche. Como elas são completamente sólidas, elas só podem ser transportadas embaladas uma a uma, em caixas separadas.

A SBC - Só Boliche Cascavel - é uma fábrica de bolas de boliche que trabalha somente através de encomendas e envia todas as bolas por SEDEX. Como as bolas têm tamanhos diferentes, a SBC tem vários tamanhos de caixas diferentes para transportá-las.

Escreva um programa que, dado o diâmetro de uma bola e as 3 dimensões de uma caixa (altura, largura e profundidade), diz se a bola de boliche cabe dentro da caixa ou não.
*/