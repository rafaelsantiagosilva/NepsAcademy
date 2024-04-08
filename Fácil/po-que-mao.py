# C O N C L U I D O
def main():
     doces = int(input())
     pkmn1 = int(input())
     pkmn2 = int(input())
     pkmn3 = int(input())

     pkmns = [pkmn1, pkmn2, pkmn3]
     pkmns.sort()

     qtdEvolui = 0
     for i in range(0, 3):
          if doces - pkmns[i] < 0:
               break
          else:
               doces -= pkmns[i]
               qtdEvolui+=1 

     print(qtdEvolui)
if __name__ == "__main__":
     main()

'''
Um novo jogo se tornou popular entre jovens de todas as idades recentemente: o “Pô, que mão”. Trata-se de um jogo onde uma mão captura criaturas raras e depois as força a lutarem umas contra as outras. Uma verdadeira barbárie.

Ainda assim, o jogo se tornou bastante popular. As criaturas são chamadas de “pô-que-mãos”. No jogo, você pode dar doces para as pô-que-mãos, para que elas fiquem mais fortes e evoluam. Como há poucos doces, nem sempre é possível evoluir todas as pô-que-mãos que um jogador possui.

Um jogador tem exatamente 3 pô-que-mãos. Cada um deles necessita de uma quantidade de doces para evoluir. Conhecendo-se a quantidade de doces disponíveis, escreva um programa para determinar qual o maior número de pô-que-mãos que podem evoluir.

Entrada
A entrada é composta por quatro linhas, cada uma contendo um inteiro. A primeira linha contém N, o número de doces disponíveis. A segunda linha contém X, o número de doces necessários para a primeira pô-que-mão evoluir. A próxima linha contém Y, o número de doces necessários para a segunda pô-que-mão evoluir. A última linha contém Z, o número de doces necessários para a terceira pô-que-mão evoluir.

Saída
Seu programa deve produzir uma única linha, contendo um inteiro, o maior número possível de pô-que-mãos que podem evoluir.
'''