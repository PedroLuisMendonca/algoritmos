Algoritmo "idadealtura"
Var
n, n2 : inteiro
n1, n3 : real
Inicio
n2 <- 0
n3 <- 0
repita
escreva ("Digite a idade ")
leia (n)
escreva ("Digite a altura ")
leia (n1)
se (n > 50) entao
n2 <- (n2 + 1)
n3 <- (n3 + n1)
fimse
ate (n <= 0)
escreva ("A média da altura das pessoas com mais de 50 anos é:", n3 / n2)
Fimalgoritmo