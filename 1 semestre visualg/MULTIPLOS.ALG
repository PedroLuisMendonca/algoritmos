Algoritmo "multiplos"
Var
n1, n2 : inteiro
Inicio
escreva("Digite o primeiro n�mero ")
leia(n1)
escreva("Digite o segundo n�mero ")
leia(n2)
se (n1>n2) entao
se (n1 mod n2 = 0) entao
escreva ("S�o M�ltiplos")
senao
escreva ("N�o s�o m�ltiplos")
fimse
senao
se (n2 mod n1 = 0) entao
escreva ("S�o m�ltiplos")
senao
escreva ("N�o s�o m�ltiplos")
fimse
fimse
Fimalgoritmo