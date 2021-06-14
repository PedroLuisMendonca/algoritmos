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
escreval ("Você gostou do produto? Responda, s para sim ou n para não")
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
escreval ("O número de pessoas que respondeu sim é:", n1)
escreval ("O número de pessoas que respondeu não é:", n2)
escreval ("O número de mulheres que respondeu sim é:", n3)
escreval ("A porcentagem de homens que repondeu não é:", ((n4 / n5) * 100), "%")
Fimalgoritmo