Algoritmo "media repita"
Var
n, n1, n2, n3 : inteiro
Inicio
escreva ("Digite a quantidade de n�meros ")
leia (n)
n2 <- 0
n3<- 0
repita
escreva ("Digite o valor ")
leia (n1)
n2 <- (n2 + n1)
n3 <- n3 + 1
ate (n3 = n)
escreva ("A m�dia �: ", (n2/n))
Fimalgoritmo