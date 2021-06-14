Algoritmo "controle de consorcio"
Var
n1, n2, n3, n4, n5 : real
Inicio
escreva ("digite o número total de prestações ")
leia (n1)
escreva ("digite a quantidade de prestações pagas ")
leia (n2)
escreva ("digite o valor das prestações ")
leia (n3)
n4 <- n2 * n3
n5 <- n1 * n3 - n4
escreva ("o valor que já foi pago é de R$",n4 , " e o valor restante é de R$",n5)
Fimalgoritmo