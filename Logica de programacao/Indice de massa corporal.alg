algoritmo "semnome"
// Função :
// Autor :
// Data : 08/03/2026
// Seção de Declarações 
var
  peso :real
  nome :caracter
  altura :real
  IMC :real
  L1 : real
  L2 :real
inicio
  escreval("digite seu nome")
  leia(nome)
  escreval()
  escreval("digite sua altura")
  leia(altura)
  escreval()
  escreval("digite seu peso")
  leia(peso)
  
  L1 := (altura * altura)
  L2 := (peso * 10000)
  IMC := L2 / L1

  escreval("------------------------------------")
  se (IMC <= 18.5) entao
    escreval(nome, " ", "Seu Índice de Massa Corporal(IMC)", IMC," ", "Você está abaixo do peso")
  senao
    se (IMC >= 18.5)  e (IMC <= 24.9) entao
      escreval(nome, " ", "Seu Índice de Massa Corporal(IMC)", " ", IMC, " ", "Seu peso está normal", " ", nome)
    senao
      se (IMC <= 25)  e (IMC <= 29.9) entao
        escreval(nome, " ", "Seu Índice de Massa Corporal(IMC)", " " IMC, " ", "Você está acima do peso", " ", nome)
      senao
        se (IMC >= 30.0) entao
          escreval(nome, " ", "Seu Índice de Massa Corporal(IMC)", " ",IMC, " ", "Você está na faixa da obesidae", " ", nome)
        fimse
      fimse
    fimse
  fimse
fimalgoritmo





