Algoritmo "IAP"
Var
n, n1, n4, n6, n7 :inteiro
n2, n3, n5 : real
Inicio
n4 <- 0
n5 <- 0
n6 <- 0    ]
n7 <- 0
para n de 1 ate 5 faca
escreva ("Digite a idade da pessoa ")
leia (n1)
escreva ("DIgite a altura da pessoa em metros ")
leia (n2)
escreva ("DIgite o peso da pessoa ")
leia (n3)
se (n1 > 50) entao
n4 <- (n4 + 1)
fimse
se (n1 > 9) e (n1 < 21) entao
n5 <- (n5 + n2)
n7 <- (n7 + 1)
fimse
se (n3 < 40) entao
n6 <- (n6 + 1)
fimse
fimpara
escreval ("A quantidade de pessoas com mais de 50 anos é:", n4)
escreval ("A média de altura das pessoa com idade entre 10 e 20 anos é:", (n5 / n7))
escreval ("A porcentagem de pessoas com peso inferior a 40 kg é:", ((n6 / 5) * 100), "%")
Fimalgoritmo