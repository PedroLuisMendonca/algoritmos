Algoritmo "soma ou raiz"
Var
n : inteiro
n1, n2 : real
Inicio
escreval ("Para realizar uma soma digite: 1")
escreval ("Para descobrir a raiz quadrada digite: 2")
leia (n)
se (n = 1) entao
escreva ("Digite o primeiro n�mero ")
leia (n1)
escreva ("Digite o segundo n�mero ")
leia (n2)
escreva ("O resultado da soma �: ", (n1 + n2))
senao
escreva ("Digite o n�mero que deseja descobrir a raiz quadrada ")
leia (n1)
n2 <- raizq (n1)
escreva ("A raiz quadrada do n�mero ", n1, " �: ", n2)
fimse
Fimalgoritmo