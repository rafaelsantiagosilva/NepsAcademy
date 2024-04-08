# C O N C L U I D O !!!
def main():
     # Entrada de Dados
     alunos_times = input().split()
     qtd_alunos = int(alunos_times[0])
     qtd_times = int(alunos_times[1])
     
     alunos = list()
     niveis_de_poder = list()
     times = list()
     
     for i in range(0, qtd_alunos):
          alunos_nivel_de_poder = input().split()
          alunos.append(alunos_nivel_de_poder[0])
          niveis_de_poder.append(int(alunos_nivel_de_poder[1]))
          
     for i in range(0, qtd_times):
          times.append([])
          
     # Adicionando os melhores alunos
     for i in range(0, qtd_alunos):
          for j in range(0, qtd_times):
               if len(alunos) == 0:
                    break
               maior_poder = max(niveis_de_poder)
               melhor_aluno = alunos[niveis_de_poder.index(maior_poder)]
               times[j].append(melhor_aluno)
               alunos.remove(melhor_aluno)
               niveis_de_poder.remove(maior_poder)
               
     # Organizando em ordem alfabética
     for i in range(0, qtd_times):
          times[i].sort()

     # Saida de Dados
     for i in range(0, qtd_times):
          print(f"Time {i+1}")
          for j in range(0, len(times[i])):
               print(times[i][j])
          print("\n")

if __name__ == "__main__":
     main()