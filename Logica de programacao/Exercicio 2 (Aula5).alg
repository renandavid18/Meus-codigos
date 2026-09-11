algoritmo "semnome"
// Função :
// Autor :
// Data : 13/03/2026
// Seção de Declarações
var
   temp, soma, media : real
   quantidade : inteiro
inicio

   enquanto temp <> 999 faca
      escreval("Digite uma temperatura ou 999 para finalizar")
      leia(temp)

      se temp <> 999 entao
         soma := soma + temp
         quantidade := quantidade + 1
      fimse
   fimenquanto
   media := soma / quantidade

   escreval("A média dessas temperaturas é: ", " ", media)

fimalgoritmo
