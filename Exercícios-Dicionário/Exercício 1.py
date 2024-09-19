 #Exercício 1: Crie um dicionário com os seguintes pares chave-valor: 'nome': 'João', 'idade': 25, 'cidade': 'São Paulo'. Em seguida, escreva um código para:
 #a) Adicionar um novo par chave-valor 'profissão': 'Engenheiro'.
 #b) Alterar o valor da chave 'idade' para 26.
 #c) Remover a chave 'cidade' do dicionário

pessoa = {'nome': 'João', 'idade': 25, 'cidade': 'São Paulo'}
#a
pessoa['profissao'] = 'Engenheiro'

#b
pessoa['idade'] = 26

#c
del pessoa['cidade']

print("Dicionário atualizado:", pessoa)