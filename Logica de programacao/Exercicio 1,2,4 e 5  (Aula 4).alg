algoritmo "Exercicio 1 e 2 (Aula 4)"
// Função :
// Autor :
// Data : 08/03/2026
// Seção de Declarações 
var
  num :inteiro
  x :inteiro
  y :inteiro
  num2 :inteiro
inicio
  escreval("digite um numero qualquer de 30 até 50 onde irei mostrar a ordem crescente")
  leia(num)
  
  para x de 0 ate 29 faca
     num := num + 1
     escreval("X: ", x)
  fimpara

  escreval("o seu numero + 30 é: ", num)

  escreval("agora digite outro valor qualquer de 30 à 50 ou o mesmo e verá ele na ordem decrescente")
  leia(num2)

  para y de 0 ate 29 faca
     num2 := num2 - 1
     escreval("Y: ",y)
  fimpara
  
  escreval("o seu numero - 30 é: ", num2)
fimalgoritmo
