Algoritmo "controle de consorcio"
Var
n1, n2, n3, n4, n5 : real
Inicio
escreva ("digite o n�mero total de presta��es ")
leia (n1)
escreva ("digite a quantidade de presta��es pagas ")
leia (n2)
escreva ("digite o valor das presta��es ")
leia (n3)
n4 <- n2 * n3
n5 <- n1 * n3 - n4
escreva ("o valor que j� foi pago � de R$",n4 , " e o valor restante � de R$",n5)
Fimalgoritmo