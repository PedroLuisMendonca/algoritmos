Algoritmo "multiplos"
Var
n1, n2 : inteiro
Inicio
escreva("Digite o primeiro número ")
leia(n1)
escreva("Digite o segundo número ")
leia(n2)
se (n1>n2) entao
se (n1 mod n2 = 0) entao
escreva ("São Múltiplos")
senao
escreva ("Não são múltiplos")
fimse
senao
se (n2 mod n1 = 0) entao
escreva ("São múltiplos")
senao
escreva ("Não são múltiplos")
fimse
fimse
Fimalgoritmo