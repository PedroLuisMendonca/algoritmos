Algoritmo "nota aluno"
Var
 n, n1, n2 , n3 : real
Inicio
escreva ("digite a primeira nota ")
leia (n1)
escreva ("digite a segunda nota ")
leia (n2)
escreva ("digite a terceira nota ")
leia (n3)
se (n1 > n2) e (n1 > n3) entao
n <- (n1*4 + n2*3 + n3*3)/10
senao
se (n2 > n1) e (n2 > n3) entao
n <- (n2*4 + n1*3 + n3*3)/10
fimse
se (n3 > n2) e (n3 > n1) entao
n <- (n3*4 + n2*3 + n1*3)/10
fimse
fimse
se (n > 5) entao
escreva ("aprovado")
senao
escreva ("reprovado")
fimse
Fimalgoritmo