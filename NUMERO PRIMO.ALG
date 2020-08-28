Algoritmo "numero primo"
Var
n1, n2, n3 : inteiro
Inicio
escreval ("Digite um número inteiro maior que 1 para descobrir se ele é primo")
leia (n1)
n3 <- 0
para n2 de 2 ate (n1 - 1) faca
se (n1 % n2 = 0) entao
n3 <- 1
fimse
fimpara
se n3 >= 1 entao
escreva (n1, " Não é um número primo")
senao
escreva (n1, " É um número primo")
fimse
Fimalgoritmo