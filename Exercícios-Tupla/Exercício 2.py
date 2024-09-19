 #Exercício 2: Dada a tupla cores = ('vermelho', 'azul', 'verde', 'amarelo', 'preto'), escreva um código para:
 #a) Encontrar o índice da cor 'verde'.
 #b) Contar quantas vezes a cor 'azul' aparece na tupla.
 #c) Criar uma nova tupla com a tupla original e mais duas cores: 'branco' e 'cinza'

cores = ('vermelho', 'azul', 'verde', 'amarelo', 'preto')
#a
indice_verde = cores.index('verde')

#b
contagem_azul = cores.count('azul')

#c
nova_cores = cores + ('branco', 'cinza')

print("Índice da cor 'verde':", indice_verde)
print("A cor 'azul' aparece", contagem_azul, "vez(es).")
print("Nova tupla com cores adicionais:", nova_cores)