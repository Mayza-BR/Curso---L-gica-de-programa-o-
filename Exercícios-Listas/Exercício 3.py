 #Exercício 3: Crie uma lista de nomes ['Ana', 'Carlos', 'Beatriz', 'Daniel','Elisa']. Em seguida, escreva um código para:
 #a) Verifique se o nome 'Carlos' está na lista.
 #b) Substituir o nome 'Beatriz' por 'Bruna'.
 #c) Contar quantas vezes o nome 'Ana' aparece na lista

nomes = ['Ana', 'Carlos', 'Beatriz', 'Daniel', 'Elisa']
#a
presenca_carlos = 'Carlos' in nomes

#b
indice_beatriz = nomes.index('Beatriz')
nomes[indice_beatriz] = 'Bruna'

#c
contagem_ana = nomes.count('Ana')

print("Carlos está na lista:", presenca_carlos)
print("Lista após substituição:", nomes)
print("O nome 'Ana' aparece", contagem_ana,"vez(es).")