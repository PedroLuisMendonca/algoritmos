Algoritmo "simnao"
Var
c, s : caractere
n, n1, n2, n3, n4, n5 : inteiro
Inicio
n1 <- 0
n2 <- 0
n3 <- 0
n4 <- 0
n5 <- 0
para n de 1 ate 10 faca
escreval ("Escreva qual seu sexo (masculino/feminino) ")
leia (s)
escreval ("Voc� gostou do produto? Responda, s para sim ou n para n�o")
leia (c)
se (c = "S") ou (c ="s") entao
n1 <- (n1 + 1)
 se (s = "feminino") entao
n3 <- (n3 + 1)
 fimse
senao
  se (c = "N") ou (c = "n") entao
n2 <- (n2 + 1)
   se (s = "masculino") entao
n4 <- (n4 + 1)
   fimse
  fimse
fimse
se (s = "masculino") entao
n5 <- (n5 + 1)
fimse
fimpara
escreval ("O n�mero de pessoas que respondeu sim �:", n1)
escreval ("O n�mero de pessoas que respondeu n�o �:", n2)
escreval ("O n�mero de mulheres que respondeu sim �:", n3)
escreval ("A porcentagem de homens que repondeu n�o �:", ((n4 / n5) * 100), "%")
Fimalgoritmo