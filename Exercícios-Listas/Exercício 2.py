 #Exercício 2: Dada a lista numeros = [1, 3, 5, 7, 9, 2, 4, 6, 8, 10],escreva um código para:
 #a) Ordenar a lista em ordem crescente.
 #b) Calcular a soma de todos os elementos da lista.
 #c) Encontrar o maior e o menor valor na lista

n = [1, 3, 5, 7, 9, 2, 4, 6, 8, 10]
#a
n.sort()

#b
somatodos = sum(n)

#c
maior = max(n)
menor = min(n)

print("Lista ordenada:", n)
print("Soma de todos os elementos da lista:", somatodos)
print("Maior valor:", maior)
print("Menor valor:", menor)