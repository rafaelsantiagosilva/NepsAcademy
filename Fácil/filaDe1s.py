# C O N C L U I D O

def main():
     N = int(input())
     binN = bin(N)
     binN = binN[2:]
     somenteUm = True
     for i in range(0, len(binN)):
          if binN[i] == 0 or binN[i] == '0':
               somenteUm = False
     if somenteUm:
          print("S")
     else:
          print("N")

if __name__ == "__main__":
     main()

'''
Fila de 1's
Ana está estudando números binários na escola, enquanto ela brincava com eles notou que realmente gosta
muito dos números que são simplesmente uma fila de 1's, por exemplo:

3(10)= 11(2)
7(10) = 111(2)
15(10) = 1111(2)

Ajude Ana a saber se ela gosta de um dado número

Entrada
A entrada consiste em um inteiro N, a escrito na base 10

Saída
Imprima S, caso Ana goste do número e N caso contrário.
'''