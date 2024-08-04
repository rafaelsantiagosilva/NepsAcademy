# C O N C L U I D O, mas o Neps fala que tá errado T-T
def main():
    # Entrada de Dados
    N = int(input())
    pes_botas = []
    qtd_botas_completas = 0

    for i in range(0, N):
        np_botas = input()
        np_botas = np_botas.split()
        numero_bota = int(np_botas[0])
        pe_bota = np_botas[1]
        
        numero_ja_existe = False
        posicao_numero = 0

        for j in range(0, len(pes_botas)):
            if pes_botas[j].count(numero_bota) != 0:
                numero_ja_existe = True
                posicao_numero = j
                break

        if numero_ja_existe:
            pes_botas[posicao_numero][1] += pe_bota

        else:
            pes_botas.append([numero_bota, pe_bota])

    # Processamento
    for i in range(0, len(pes_botas)):
        # Pé direito != 0 e Pé esquerdo != 0
        if pes_botas[i][1].count("D")!= 0 and pes_botas[i][1].count("E") != 0:
            qtd_botas_completas+=1

    # Saida de Dados
    print(qtd_botas_completas, end="")

if __name__ == "__main__":
    main()

'''
Botas Trocadas
A divisão de Suprimentos de Botas e Calçados do Exército comprou um grande número de pares de botas de vários tamanhos para seus soldados. No entanto, por uma falha de empacotamento da fábrica contratada, nem todas as caixas entregues continham um par de botas correto, com duas botas do mesmo tamanho, uma para cada pé. O sargento mandou que os recrutas retirassem todas as botas de todas as caixas para reembalá-las, desta vez corretamente.

Quando o sargento descobriu que você sabia programar, ele solicitou com a gentileza habitual que você escrevesse um programa que, dada a lista contendo a descrição de cada bota entregue, determina quantos pares corretos de botas poderão ser formados no total.

Entrada
A primeira linha da entrada contém um inteiro N indicando o número de botas individuais entregues. Cada uma das N linhas seguintes descreve uma bota, contendo um número inteiro M e uma letra L, separados por um espaço em branco. M indica o número do tamanho da bota e L indica o pé da bota: L = ‘D’ indica que a bota é para o pé direito, L = ‘E’ indica que a bota é para o pé esquerdo.

Saída
Seu programa deve imprimir uma única linha contendo um único número inteiro indicando o número total de pares corretos de botas que podem ser formados.
'''