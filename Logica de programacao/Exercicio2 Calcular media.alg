algoritmo "semnome"
// Função :
// Autor :
// Data : 20/12/2025
// Seção de Declarações 
var
nota1, nota2, nota3, media : real
inicio
escreval("Digite a sua primeira nota de 0 à 10")
leia(nota1)
escreval()
escreval("Digite a sua segunda nota de 0 à 10")
leia(nota2)
escreval()
escreval("Digite a sua terceira nota de 0 à 10")
leia(nota3)

media := (nota1 + nota2 + nota3) / 3

se (media >= 6) entao
  escreval("Parabéns sua nota foi: ",media," você foi aprovado!!!")
senao
  escreval("Infelizmente sua nota foi: ",media," você foi reprovado!")
fimse
fimalgoritmo
