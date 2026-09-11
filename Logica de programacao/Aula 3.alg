algoritmo "semnome"

var
 copo : inteiro
 jarra : inteiro
inicio
 copo := 0
 jarra := 20
 
 se (copo = 0) e (jarra >= 10)  entao
   copo := 10
   jarra := jarra - 10
 fimse
 
 escreval(copo)
 escreval(jarra)
fimalgoritmo
