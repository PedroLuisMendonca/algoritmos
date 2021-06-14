Algoritmo "15compras"
Var
c : caractere
n1, n2, n3 : real
n : inteiro
Inicio
n2 <- 0
n3 <- 0
para n de 1 ate 15 faca
escreva ("Digite o código da compra ")
leia (c)
escreva ("Digite o valor da compra ")
leia (n1)
se (c = "v") ou (c = "V")entao
n2 <- n2 + n1
senao
 se (c = "p") ou (c = "P") entao
 n3 <- n3 + n1
 fimse
fimse
fimpara
escreval("Valor total das compras à vista é: ", n2)
escreval("Valor total das compras à prazo é: ", n3)
escreval("Valor total das compras efetuadas é: ",(n2 + n3))
escreval("Valor da primeira prestação das compras à prazo juntas: ", (n3 / 3))
Fimalgoritmo