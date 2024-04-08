# C O N C L U I D O
def main():
     v = int(input())

     s100 = int(v / 100)
     v -= s100 * 100
     s50 = int(v / 50)
     v -= s50 * 50
     s25 = int(v / 25)
     v -= s25 * 25
     s10 = int(v / 10)
     v -= s10 * 10
     s5 = int(v / 5)
     v -= s5 * 5
     s1 = int(v / 1)
     v -= s1

     somaMoedas = s100 + s50 + s25 + s10 + s5 + s1
     
     print(somaMoedas)


if __name__ == '__main__':
     main()

'''
Estratégia Gulosa
Tarefa: Dado um conjunto de moedas S com valores diferentes. Qual é a quantidade mínima de moedas necessárias para representar o valor V?

Neste exercício sempre consideraremos S={1,5,10,25,50,100}.

Exemplo: Para S dado e V=235, precisamos de 4 moedas. 2 moedas com valor 100, 1 moeda com valor 25 e 1 moeda com valor 10.

Entrada
A entrada contém um único número representando V.

Saída
Seu programa deve imprimir o menor número de moedas necessárias para representar V.
'''