Algoritmo "tp"
Var
n, n1, n2, n3, i, i1 :inteiro
r1 :caracter
b : vetor [0..7] de inteiro
Inicio
repita
escreval ("Escolha uma opção.")
escreval ("1.Decimal para binário.")
escreval ("2.Binário para decimal(binário de 8 digitos).")
escreval ("3.Sair")
leia (n)
se (n=1) entao
r1<-""
escreval ("Digite o número decimal.")
leia (n1)
enquanto (n1>0) faca
se (n1 mod 2)=0 entao
r1 <-"0"+r1
senao
r1 <-"1"+r1
fimse
n1<-(n1 div 2)
fimenquanto
escreval (r1)
fimse
 se (n=2) entao
 n2<-0
 para i de 7 ate 0 passo -1 faca
 escreval ("Digite o número da posiçao ", 8-i )
 leia (b[i])
  se (b[i]=1) entao
  n3<-1
  para i1 de 1 ate i faca
  n3<-n3*2
  fimpara
  n2<-n2+b[i]*n3
  fimse
 fimpara
 escreval (n2)
 fimse
ate (n=3)
Fimalgoritmo