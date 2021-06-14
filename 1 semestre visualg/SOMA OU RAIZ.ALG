Algoritmo "soma ou raiz"
Var
n : inteiro
n1, n2 : real
Inicio
escreval ("Para realizar uma soma digite: 1")
escreval ("Para descobrir a raiz quadrada digite: 2")
leia (n)
se (n = 1) entao
escreva ("Digite o primeiro número ")
leia (n1)
escreva ("Digite o segundo número ")
leia (n2)
escreva ("O resultado da soma é: ", (n1 + n2))
senao
escreva ("Digite o número que deseja descobrir a raiz quadrada ")
leia (n1)
n2 <- raizq (n1)
escreva ("A raiz quadrada do número ", n1, " é: ", n2)
fimse
Fimalgoritmo