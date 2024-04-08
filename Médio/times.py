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
     
'''
Times
As aulas de educação física, em muitas escolas, acontecem da seguinte maneira: O professor entrega uma bola ao alunos (geralmente de futebol) e estes se dividem em times, onde jogam partidas alternadamente.

A maneira como os times são escolhidos também é semelhante em todas as escolas: decide-se quantos times serão formados, e uma pessoa para montar cada um dos times. Cada pessoa vai escolher, alternadamente, um dos alunos restantes para fazer parte de sua equipe. Como todos querem ter uma boa equipe, a pessoa que vai escolher o próximo membro do time escolhe aquele, dentre os ainda disponíveis, que possui o melhor nível de habilidade. Assim, os times acabam ficando relativamente equilibrados na soma do nível de habilidade dos jogadores.

Dada uma lista de alunos que serão escolhidos e seus respectivos níveis de habilidade para os times e a quantidade de times que serão formados, mostre como ficarão os times ao final do processo de montagem dos mesmos.

Entrada
A primeira linha da entrada contém dois inteiros N e T, representando respectivamente a quantidade de alunos e o número de times a serem formados, sendo T <=N. As N linhas seguintes descrevem, cada uma, um aluno disponível para escolha de times. Cada uma dessas linhas possui o nome do aluno (composto apenas por letras minúsculas) e um inteiro H descrevendo seu nível de habilidade).

Não existem dois alunos com o mesmo nível de habilidade, e todos eles possuem nomes diferentes. É possível que alguns times acabem ficando com menos jogadores do que os outros.

Saída
Seu programa deve imprimir a lista de times que será formada ao final do processo de seleção. Para cada time, você deverá mostrar o termo "Time N", onde N é o número do time (1 para o primeiro, 2 para o segundo, e assim por diante) seguido de K linhas, onde K é a quantidade de jogadores do time, mostrando o nome de cada um dos jogadores do time, em ordem alfabética. Imprima uma linha em branco após cadadescrição de time (inclusive do último).

Os times serão escolhidos pelo computador, então não é necessário considerar o aluno que irá fazer a escolha dos times.
'''