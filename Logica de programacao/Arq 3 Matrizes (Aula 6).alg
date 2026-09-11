algoritmo "semnome"
// Função :
// Autor :
// Data : 13/03/2026
// Seção de Declarações 
var
  matriz :vetor [1..4,1..4] de real
  x,y :inteiro
inicio
  para x de 1 ate 4 faca
    para y de 1 ate 4 faca
      escreval("Digite o valor presente na posição ", x, y)
      leia(matriz[x,y])
    fimpara
  fimpara
  
  para x de 1 ate 4 faca
    para y de 1 ate 4 faca
      escreva(matriz[x,y], "   ")
    fimpara
    escreval()
  fimpara

fimalgoritmo
