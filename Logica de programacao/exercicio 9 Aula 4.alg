algoritmo "Informar taxa recebida á cada mês"
// Função :
// Autor :
// Data : 08/03/2026
// Seção de Declarações
var
  capital, montante, juros :real
  x :inteiro
inicio
juros := 0.012
escreval("informe o investimento e será exibido o valor que vai render a cada mês numa taxa fixa de 102% do CDI")
leia(capital)
para x de 1 ate 10 faca
   montante := capital + (capital*juros)
   capital := montante
   escreval("no mês", " ", x, " ", "seu valor é de ", montante)

 fimpara

fimalgoritmo
