Algoritmo "meni2"
Var
n, n2 : inteiro
n1 : real
Inicio
escreval ("Menu de opções:")
escreval ("1. Novo salário")
escreval ("2. Férias")
escreval ("3. Décimo Terceiro")
escreval ("4. Sair")
escreval ("Digite a opção desejada.")
leia (n)
se (n = 1) entao
escreva ("Digite o seu salário ")
leia (n1)
 se (n1 < 210) entao
 escreva ("Seu novo salário é de:", (n1 * 115/100))
 senao
  se (n1 >= 210) e (n1 <= 600) entao
  escreva ("Seu novo salário é de:", (n1 * 11/10))
  senao
   se (n1 > 600) entao
   escreva ("Seu novo salário é de:", (n1 * 105/100))
   fimse
  fimse
 fimse
senao
 se (n = 2) entao
 escreva ("Digite o seu salário ")
 leia (n1)
 escreva ("O valor das suas férias é de:", (n1 + (n1 * 1/3)))
 senao
  se (n = 3) entao
  escreva ("Digite o seu salário ")
  leia (n1)
  escreva ("Digite o número de meses trabalhados, máximo de 12 ")
  leia (n2)
  escreva ("O valor do seu décimo terceiro é de:", n1 * n2 / 12)
  senao
   se (n = 4) entao
   escreva ("Você saiu.")
    senao
    escreva ("Opção inválida.")
   fimse
  fimse
 fimse
fimse
Fimalgoritmo