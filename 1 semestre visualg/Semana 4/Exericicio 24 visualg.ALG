Algoritmo "menoremaior"
Var
n, nn, n1, n2 : inteiro
Inicio
n1 <- 999999999
n2 <- 0
repita
escreval ("Digite o valor ")
leia (n)
se (n > 0) entao
nn <- 1
 se (nn = 1) entao
  se (n < n1) entao
  n1 <- n
  fimse
  se (n > n2) entao
  n2 <- n
  fimse
 fimse
senao
 escreval ("S�o v�lido somente n�meros positivos.")
fimse
ate (n = 0)
escreval ("O menor n�mero �:", n1)
escreval ("O maior n�mero �:", n2)
Fimalgoritmo