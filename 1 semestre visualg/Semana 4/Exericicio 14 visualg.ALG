Algoritmo "cinema"
Var
n, n1, n2, n3, n4, n5, n6 : inteiro
Inicio
n3 <- 0
n4 <- 0
n5 <- 0
n6 <- 0
para n de 1 ate 15 faca
escreval ("Qual sua opini�o do filme? Responda: 3-�timo, 2-bom, 1-regular ")
leia (n1)
escreva ("Qual sua idade? ")
leia (n2)
se (n1 = 3) entao
n3 <- (n3 + n2)
n4 <- (n4 + 1)
fimse
se (n1 = 1) entao
n5 <- (n5 + 1)
fimse
se (n1 = 2) entao
n6 <- (n6 + 1)
fimse
fimpara
escreval ("A idade m�dia das pessoas que reponderam �timo �:", (n3 / n4))
escreval ("A quantidade de pessoas que reponderam regular �:", n5)
escreval ("A percentagem de pessoas que responderam bom �:", ((n6 / 15) * 100),"%")
Fimalgoritmo