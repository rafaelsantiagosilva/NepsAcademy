# C O N C L U I D O
def main():
  palavra = input()
  vogais = ['a', 'e', 'i', 'o', 'u']

  vogaisPalavra = ""
  consoantesPalavra = ""

  for letra in palavra:
    if vogais.count(letra) > 0:
      vogaisPalavra += letra
    else:
      consoantesPalavra += letra
  
  print(f'Vogais: {vogaisPalavra}')
  print(f'Consoantes: {consoantesPalavra}')

if __name__ == "__main__":
  main()

'''
Vogais e Consoantes
Faça um programa para ler uma string 
S
S (sem espaço). Seu programa deve imprimir duas listas. A primeira com todas as vogais da string e uma segunda com todas as consoantes da string.

Entrada
A entrada consiste de uma linha contendo uma string 
S
S.

Saída
A saída consiste de duas linhas. A primeira linha consiste da mensagem "Vogais: " seguida da string 
S
S sem as consoantes. A segunda linha consiste da mensagem "Consoantes: " seguida da string 
S
S sem suas vogais. Considere que apenas as letras 'a', 'e', 'i', 'o' e 'u' são vogais. Perceba nos exemplos de entrada e saída, que a ordem das letras na string 
S
S se mantém na saída.
'''