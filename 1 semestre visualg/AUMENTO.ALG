Algoritmo "aumento"
Var
n : inteiro
n1, n2 : real
Inicio
escreval ("Digite o c�digo de seu cargo")
escreval ("C�digo 1 = escritu�rio")
escreval ("C�digo 2 = secret�rio")
escreval ("C�digo 3 = caixa")
escreval ("C�digo 4 = gerente")
escreval ("C�digo 5 = diretor")
leia (n)
escreva ("Qual o seu sal�rio atual? ")
leia (n1)
se (n = 1) entao
n2 <- (n1 * 3/2)
escreval ("Seu aumento foi de 50%: ", (n2 - n1))
escreval ("Seu sal�rio agora � de : ", n2)
senao
 se (n = 2) entao
 n2 <- (n1 * 135/100)
escreval ("Seu aumento foi de 35%: ", (n2 - n1))
escreval ("Seu sal�rio agora � de : ", n2)
 senao
   se (n = 3) entao
n2 <- (n1 * 6/5)
escreval ("Seu aumento foi de 20%: ", (n2 - n1))
escreval ("Seu sal�rio agora � de : ", n2)
   senao
    se (n = 4) entao
n2 <- (n1 * 11/10)
escreval ("Seu aumento foi de 10%: ", (n2 - n1))
escreval ("Seu sal�rio agora � de : ", n2)
    senao
     se (n = 5) entao
     escreva ("N�o houve aumento para voc�, seu sal�rio continua ", n1)
     fimse
    fimse
   fimse
 fimse
fimse
Fimalgoritmo