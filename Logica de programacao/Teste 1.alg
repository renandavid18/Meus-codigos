algoritmo "Projeto teste 1"
// Função :
// Autor :
// Data : 17/03/2026
// Seção de Declarações 
var
 a, c, v, i :real
 verific, pause :caracter
inicio

  i <- 0

  escreval("digite o valor de a")
  leia(a)
  escreval("digite o valor de c")
  leia(c)
  escreval("digite o valor de a")
  leia(v)
  
  se (a > c) e (a > v) entao
  escreval(" A é o maior numero")
  fimse
  
  se (c > a) e (c > v) entao
  escreval("C é o maior numero")
  fimse
  
  se (v > a) e (v > c) entao
  escreval("V é o maior número")
  fimse
  
  se (a = c) e (a > v) entao
  escreval("A e C são iguais e maiores do que o V")
  fimse

  se (c = v) e (c > a) entao
  escreval("C e V são iguais e maiores do que o A")
  fimse
  
  se (a = v) e (a > c) entao
  escreval("A e V são iguais e maiores do que o C")
  fimse
  
  leia(pause)

  enquanto (i = 0) faca
    escreval("Você quer confirmar as respostas? se sim digite (s) se não digite(n)")
    leia(verific)
  
      se verific = "s" entao
        escreval("A > X é: ")
        escreva(a>c)
        escreval()
        escreval("A > V é: ")
        escreva(a>v)
        escreval()
        escreval("C > V é: ")
        escreva(c>v)
        escreval()
        escreval("A = C é: ")
        escreva(a=c)
        escreval()
        escreval("A = V é: ")
        escreva(a=v)
        escreval()
        escreval("C = V é: ")
        escreva(c=v)
        escreval()
        i <- 1
      fimse
  
      se verific = "n" entao
        escreval("problema resolvido, até daqui a próxima!")
        i <- 1
      fimse
   
      se (verific <> "n") e (verific <> "s") entao
        escreval("irei repitir a pergunta")
        escreval()
        
      fimse
    
  fimenquanto
fimalgoritmo
