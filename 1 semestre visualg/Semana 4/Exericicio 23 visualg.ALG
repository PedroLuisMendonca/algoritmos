Algoritmo "meni2"
Var
n, n2 : inteiro
n1 : real
Inicio
repita
escreval ("Menu de op��es:")
escreval ("1. Novo sal�rio")
escreval ("2. F�rias")
escreval ("3. D�cimo Terceiro")
escreval ("4. Sair")
escreval ("Digite a op��o desejada.")
leia (n)
se (n = 1) entao
escreva ("Digite o seu sal�rio ")
leia (n1)
 se (n1 < 210) entao
 escreva ("Seu novo sal�rio � de:", (n1 * 115/100))
 senao
  se (n1 >= 210) e (n1 <= 600) entao
  escreva ("Seu novo sal�rio � de:", (n1 * 11/10))
  senao
   se (n1 > 600) entao
   escreva ("Seu novo sal�rio � de:", (n1 * 105/100))
   fimse
  fimse
 fimse
senao
 se (n = 2) entao
 escreva ("Digite o seu sal�rio ")
 leia (n1)
 escreva ("O valor das suas f�rias � de:", (n1 + (n1 * 1/3)))
 senao
  se (n = 3) entao
  escreva ("Digite o seu sal�rio ")
  leia (n1)
  escreva ("Digite o n�mero de meses trabalhados, m�ximo de 12 ")
  leia (n2)
  escreva ("O valor do seu d�cimo terceiro � de:", n1 * n2 / 12)
  senao
   se (n = 4) entao
   escreva ("Voc� saiu.")
    senao
    escreva ("Op��o inv�lida.")
   fimse
  fimse
 fimse
fimse
ate (n = 4)
Fimalgoritmo