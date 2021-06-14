Algoritmo "8idade"
Var
n, n1, n2, n3, n4, n5, n6: inteiro
n7, n8: real
Inicio
n1 <- 0
n2 <- 0
n3 <- 0
n4 <- 0
n5 <- 0
n6 <- 0
repita
escreva ("Digite a idade da pessoa ")
leia (n)
n6 <- (n6 + 1)
se (n < 16) entao
n1 <- (n1 + 1)
senao
 se (n > 15) e (n < 31) entao
n2 <- (n2 + 1)
 senao
  se (n > 30) e (n < 46) entao
n3 <- (n3 + 1)
  senao
   se (n > 45) e (n < 61) entao
n4 <- (n4 + 1)
   senao
    se (n > 60) entao
n5 <- (n5 + 1)
    senao
    fimse
   fimse
  fimse
 fimse
fimse
ate (n6 = 8)
escreval ("Na primeira faixa etária tem ", n1, " pessoas")
escreval ("Na segunda faixa etária tem ", n2, " pessoas")
escreval ("Na terceira faixa etária tem ", n3, " pessoas")
escreval ("Na quarta faixa etária tem ", n4, " pessoas")
escreval ("Na quinta faixa etária tem ", n5, " pessoas")
n7 <- ((n1 / 8) * 100)
n8 <- ((n5 / 8) * 100)
escreval ("A porcentagem de pessoas na primeira faixa etária é de", n7, "%")
escreval ("A porcentagem de pessoas na quinta faixa etária é de", n8, "%")
Fimalgoritmo