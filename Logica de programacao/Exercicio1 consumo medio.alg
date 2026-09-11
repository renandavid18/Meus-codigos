algoritmo "semnome"
// Função :
// Autor :
// Data : 20/12/2025
// Seção de Declarações 
var
combustivel : real
distancia : real
consumo : real
inicio
escreval("Aqui você saberá qual é a média de consumo de seu veículo")

escreval()

escreval("me informe quantos KM você andou e se foi menos que 1KM use a virgula e a distancia percorrida")
leia(distancia)

escreval()

escreval("Agora me informe quantos litros seu veículo gastou")
leia(combustivel)

consumo := distancia / combustivel
escreval()

escreval("o consumo médio nessa viagem foi de:",consumo,"km/l")

fimalgoritmo
