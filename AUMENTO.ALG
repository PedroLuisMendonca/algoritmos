Algoritmo "aumento"
Var
n : inteiro
n1, n2 : real
Inicio
escreval ("Digite o código de seu cargo")
escreval ("Código 1 = escrituário")
escreval ("Código 2 = secretário")
escreval ("Código 3 = caixa")
escreval ("Código 4 = gerente")
escreval ("Código 5 = diretor")
leia (n)
escreva ("Qual o seu salário atual? ")
leia (n1)
se (n = 1) entao
n2 <- (n1 * 3/2)
escreval ("Seu aumento foi de 50%: ", (n2 - n1))
escreval ("Seu salário agora é de : ", n2)
senao
 se (n = 2) entao
 n2 <- (n1 * 135/100)
escreval ("Seu aumento foi de 35%: ", (n2 - n1))
escreval ("Seu salário agora é de : ", n2)
 senao
   se (n = 3) entao
n2 <- (n1 * 6/5)
escreval ("Seu aumento foi de 20%: ", (n2 - n1))
escreval ("Seu salário agora é de : ", n2)
   senao
    se (n = 4) entao
n2 <- (n1 * 11/10)
escreval ("Seu aumento foi de 10%: ", (n2 - n1))
escreval ("Seu salário agora é de : ", n2)
    senao
     se (n = 5) entao
     escreva ("Não houve aumento para você, seu salário continua ", n1)
     fimse
    fimse
   fimse
 fimse
fimse
Fimalgoritmo