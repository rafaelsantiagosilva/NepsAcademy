// C O N C L U I D O
#include <stdio.h>

int main(void)
{
	int idades[3], i, maior = 0, menor = 100, pos_maior, pos_menor, camila;

	for (i = 0; i < 3; i++)
	{
		scanf("%d", &idades[i]);
	}

	for (i = 0; i < 3; i++)
	{
		if (idades[i] > maior)
		{
			maior = idades[i];
			pos_maior = i;
		}

		if (idades[i] < menor)
		{
			menor = idades[i];
			pos_menor = i;
		}
	}

	for (i = 0; i < 3; i++)
	{
		if (i != pos_maior && i != pos_menor)
		{
			if (idades[i] != maior && idades[i] != menor)
			{
				camila = idades[i];
			}

			if (idades[i] == maior || idades[i] == menor)
			{
				camila = idades[i];
			}
		}
	}

	printf("%d", camila);

	return 0;
}

/*
Idade de Camila
Cibele, Camila e Celeste são três irmãs inseparáveis. Estão sempre juntas e adoram fazer esportes, ler, cozinhar, jogar no computador... Agora estão aprendendo a programar computadores para desenvolverem seus próprios jogos.

Mas nada disso interessa para esta tarefa: estamos interessados apenas nas suas idades. Sabemos que Cibele nasceu antes de Camila e Celeste nasceu depois de Camila.

Dados três números inteiros indicando as idades das irmãs, escreva um programa para determinar a idade de Camila.
*/
