ALGORITMO "resto enquanto"
 VAR
    cont, quant : inteiro
 INICIO
   quant <-0
   cont <- 0
   enquanto ( cont <=200) faca
       se (cont % 11 = 5) entao
          quant <- quant + 1
       fimse
       cont <- cont +1
   fimenquanto
   escreva("Foram encontrados ", quant, " valores")
 FIMALGORITMO