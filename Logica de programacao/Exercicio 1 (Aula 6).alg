algoritmo "semnome"
// Função :
// Autor :
// Data : 13/03/2026
// Seção de Declarações 
var
  vetores :vetor [1..20] de inteiro
  x :inteiro
inicio
  para x de 1 ate 20 faca
    escreval("Digite o valor ", x)
    leia(vetores[x])

  fimpara

  escreval("-------------------------------------")
  escreval()

  para x de 1 ate 20 faca
    escreval(vetores[21 - x])
  fimpara
fimalgoritmo
