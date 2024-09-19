 #Exercício 1: Crie uma lista com os números de 1 a 10. Em seguida, escreva um código para:
 #a) Adicionar o número 11 ao final da lista.
 #b) Remover o número 5 da lista.
 #c) Inverter a ordem dos elementos na lista

l = list(range(1, 11))
#a
l.append(11)

#b
indice_5 = l.index(5)
del l[indice_5]

#c
l.reverse()

print(l)