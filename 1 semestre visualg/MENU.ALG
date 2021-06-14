Algoritmo "menu"
Var
n, n4, n5, n6 : inteiro
n1, n2, n3 : real
Inicio
escreval ("Menu de opções")
escreval ("1. Média aritmética")
escreval ("2. Média ponderada")
escreval ("3. Sair")
escreval ("Digite a opção desejada")
leia (n)
se (n = 1) entao
escreva ("Digite a primeira nota ")
leia (n1)
escreva ("Digite a segunda nota ")
leia (n2)
escreva ("A média aritmética é:",(n1 + n2) / 2)
senao
 se (n = 2) entao
 escreva ("Digite a primera nota ")
 leia (n1)
 escreva ("Digite o peso da primeira nota ")
 leia (n4)
 escreva ("Digite a segunda nota ")
 leia (n2)
 escreva ("Digite o peso da segunda nota ")
 leia (n5)
 escreva ("Digite a terceira nota ")
 leia (n3)
 escreva ("Digite o peso da terceira nota ")
 leia (n6)
 escreva ("A média ponderada é:", ((n1*n4)+(n2*n5)+(n3*n6))/(n4+n5+n6))
 senao
  se (n = 3) entao
  escreva ("Você saiu")
  senao
  escreva ("Comando inválido")
  fimse
 fimse
fimse
Fimalgoritmo