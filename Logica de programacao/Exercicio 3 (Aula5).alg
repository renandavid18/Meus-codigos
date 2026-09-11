algoritmo "semnome"
// Função :
// Autor :
// Data : 13/03/2026
// Seção de Declarações 
var
  valor, media, soma, mult : real
  quantidade : inteiro
  pause :caracter
inicio
  mult := 1
  escreval("Digite um valor qualquer entre 100 e 200")
  leia(valor)

  enquanto (valor >= 100) e (valor <= 200) faca
    escreval("Digite o próximo valor qualquer entre 100 e 200")
    leia(valor)

    quantidade := quantidade + 1
    soma := soma + valor
    mult := mult * valor
  fimenquanto

  escreval("Valor fora do alcance")
  escreval("-------------------------------------------")
  escreval()
  leia(pause)
  
  se quantidade > 0 entao
    media := soma / quantidade
    escreval("Você digitou: ", " ", quantidade, " ", "valores")
    escreval()
    escreval("A soma desses valores foi:", " ", soma)
    escreval()
    escreval("A multiplicação de todos os valores foi: ", mult)
    escreval()
    escreval("A média desses valores foi: ", media)
  senao
    escreval("Não foi digitado nenhum valor válido")
  fimse
fimalgoritmo
