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
     
     print(f'{somaMoedas}\n{s100}\n{s50}\n{s25}\n{s10}\n{s5}\n{s1}')


if __name__ == '__main__':
     main()

'''
Troco em Moedas
Bino tem que fornecer C centavos de troco e deseja fornecer esse troco com a menor quantidade possível de moedas. Bino possui infinitas moedas de um real, cinquenta centavos, vinte e cinco centavos, dez centavos, cinco centavos e de um centavo.

Faça um programa para ler um inteiro C representando a quantidade de centavos que Bino tem que fornecer de troca. Imprima a quantidade de moedas que Bino forneceu e em seguida imprima a quantidade de cada tipo de moeda que Bino forneceu. Tome muito cuidado com a formatação da sua saída.
'''