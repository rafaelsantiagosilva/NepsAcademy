def main():  
  n = int(input())

  bonecas = input()
  bonecas = bonecas.split()
  bonecas = list(map(lambda n: int(n), bonecas))

  bonecasEmOrdem = bonecas[:]
  bonecasEmOrdem.sort()

  bonecasParaRecolher = []

  for i in range(n):
    if bonecas[i] != bonecasEmOrdem[i]:
      bonecasParaRecolher.append(bonecas[i])

  bonecasParaRecolher.sort()

  print(len(bonecasParaRecolher))

  if len(bonecasParaRecolher) > 0:
    for boneca in bonecasParaRecolher:
      print(boneca, end=' ')

if __name__ == "__main__":
  main()