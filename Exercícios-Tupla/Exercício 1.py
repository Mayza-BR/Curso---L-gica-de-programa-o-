 #Exercício 1: Dada a tupla numeros = (10, 20, 30, 40, 50), escreva um código para:
 #a) Acessar o terceiro elemento da tupla.
 #b) Verificar se o número 20 está na tupla.
 #c) Converter a tupla em uma lista

n = (10, 20, 30, 40, 50)
#a
terceiro_elemento = n[2]

#b
presenca_20 = 20 in n

#c
n_lista = list(n)

print("Terceiro elemento da tupla:", terceiro_elemento)
print("O número 20 está na tupla:", presenca_20)
print("Tupla convertida para lista:", n_lista)