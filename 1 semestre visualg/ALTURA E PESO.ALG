Algoritmo "altura e peso"
Var
n1, n2 :real
Inicio
escreva ("Qual a sua altura ")
leia (n1)
escreva ("Qual o seu peso ")
leia (n2)
se (n1 <= 12/10) entao
 se n2 < 61 entao
 escreva ("Você está classificado como A")
 senao
  se (n2 > 60) e (n2 < 91) entao
  escreva ("Você está classificado como B")
  senao
   se n2 > 90 entao
   escreva ("Você está classificado como C")
   fimse
  fimse
 fimse
senao
se (n1 > 12/10) e (n1 <= 17/10) entao
 se n2 < 61 entao
 escreva ("Você está classificado como D")
 senao
  se (n2 > 60) e (n2 < 91) entao
  escreva ("Você está classificado como E")
  senao
   se n2 > 90 entao
   escreva ("Você está classificado como F")
   fimse
  fimse
 fimse
senao
se (n1 > 17/10) entao
 se n2 < 61 entao
 escreva ("Você está classificado como G")
 senao
  se (n2 > 60) e (n2 < 91) entao
  escreva ("Você está classificado como H")
  senao
   se n2 > 90 entao
   escreva ("Você está classificado como I")
   fimse
  fimse
 fimse
fimse
fimse
fimse
Fimalgoritmo