# C O N C L U I D O
def eh_vogal(letra):
  vogais = ['a', 'e', 'i', 'o', 'u']

  if vogais.count(letra) > 0:
    return True
  
  return False

def main():
  palavra = input()
  palavra_reversa = []
  
  for letra in palavra:
    if eh_vogal(letra):
      palavra_reversa.append(letra)
  
  palavra = palavra_reversa[:]
  palavra_reversa = []

  for i in range(len(palavra)-1, -1, -1):
    palavra_reversa.append(palavra[i])

  if palavra == palavra_reversa:
    print('S')
  else:
    print('N')
  
if __name__ == "__main__":
  main()