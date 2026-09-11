algoritmo "1 versão Calculadora"
// Função :
// Autor :
// Data : 17/03/2026
// Seção de Declarações 
var

   n1, n2, n3, n4, mult, sub, soma, divi, rad, raiz, ex, seno, coss, tang, porc :real
   cal, op, pause, nome, x :caracter
   i, y, j :inteiro
   
inicio
      i <- 0

      escreval("me informe seu nome por favor")
      leia(nome)
      escreval()
      escreval("Vamos começar?")
      
      enquanto i = 0 faca
        escreval("deseja ver qual são as operações disponíveis? (s) para sim e (n)")
        leia(op)
        
        se op <> "n" entao
          escreval("Temos as seguintes opções: soma, subtração, multiplicação, divisão, porcentagem,")
          escreval("(seno,cosseno e tangente de um angulo) e raiz quadrada. Clique ENTER para continuar")
          leia(pause)
          escreval()
        fimse
        se op = "n" entao
          escreval()
        fimse
        
          escreval("Qual a operação matemática você deseja usar?")
          leia(cal)
        
          se cal = "soma" entao
            escreval("qual o primeiro valor?")
            leia(n1)
            escreval("qual o segundo valor?")
            leia(n2)
        
            soma <- n1 + n2
            escreval("A soma desse valor é: ", soma)
          
            i <- 1
          fimse
        
          se (cal = "subtração") ou (cal = "subtracao") ou (cal = "subtracão") ou (cal = "subtraçao") entao
            escreval("qual o primeiro valor?")
            leia(n1)
            escreval("qual o segundo valor?")
            leia(n2)

            sub <- n1 - n2
            escreval("A subtração desse valor é: ", sub)
            i <- 1
          fimse
        
          se (cal = "multiplicação") ou (cal = "multiplicacao") ou (cal = "multiplicacão") ou (cal = "multiplicaçao") entao
            escreval("qual o primeiro valor?")
            leia(n1)
            escreval("qual o segundo valor?")
            leia(n2)

            mult <- n1 * n2
            escreval("A multiplicação desse valor é: ", mult)
            i <- 1
          fimse
        
          se (cal = "divisão") ou (cal = "divisao") entao
            escreval("qual é o numerador?")
            leia(n1)
            escreval("qual é o denominador?")
            leia(n2)

            divi <- n1 / n2
            escreval("A divisão desse valor é: ", divi)
            i <- 1
          fimse
        
          se (cal = "exponenciação") ou (cal = "exponenciacao") ou (cal = "xponenciacão") ou (cal = "exponenciaçao") entao
            escreval("qual é a base?")
            leia(n1)
            escreval("qual é o expoente?")
            leia(n2)

            ex <- n1 ^ n2
            escreval("A exponenciação desses valores é: ", ex)
            i <- 1
          fimse

          se cal = "seno" entao
            escreval("você quer o seno de um ângulo ou de um número?")
            leia(x)
            se (x = "angulo") ou (x = "ângulo") entao
              escreval("Qual o valor desse ângulo?")
              leia(n1)
            
              seno <- sen(graupRad(n1))
              escreval("O seno desse ângulo é: ", seno)
            fimse

            se (x = "numero") ou (x = "número") entao
              escreval("Qual é o valor")
              leia(n1)
            
              seno <- sen(n1)
              escreval("O seno desse valor é: ", seno)
            fimse
            se (x <> "numero") ou (x <> "número") ou (x <> "angulo") ou (x <> "ângulo") entao
              escreval("Por favor insira uma resposta valida")
              leia(x)
             fimse
             i <- 1
          fimse
        
          se cal = "cosseno" entao
            escreval("você quer o cosseno de um ângulo ou de um número?")
            leia(x)
              se (x = "angulo") ou (x = "ângulo") entao
                escreval("Qual o valor desse angulo?")
                leia(n1)

                coss <- cos(graupRad(n1))
                escreval("O cosseno desse angulo é: ", coss)
              fimse

              se (x = "numero") ou (x = "número") entao
                escreval("Qual é o valor")
                leia(n1)

                coss <- cos(n1)
               escreval("O cosseno desse valor é: ", coss)
             fimse
             se (x <> "numero") ou (x <> "número") ou (x <> "angulo") ou (x <> "ângulo") entao
               escreval("Por favor insira uma resposta valida")
               leia(x)
             fimse
             i <- 1
          fimse

          se cal = "tangente" entao
            escreval("você quer a tangente de um ângulo ou de um número?")
            leia(x)
            se (x = "angulo") ou (x = "ângulo") entao
              escreval("Qual o valor desse angulo?")
              leia(n1)

              tang <- tan(graupRad(n1))
              escreval("A tangente desse ângulo é: ", tang)
            fimse

            se (x = "numero") ou (x = "número") entao
              escreval("Qual é o valor")
              leia(n1)

              tang <- tan(n1)
              escreval("A tangente desse valor é: ", tang)
            fimse
            
            se (x <> "numero") e (x <> "número") e (x <> "angulo") e (x <> "ângulo") entao
              escreval("Por favor insira uma resposta valida")
              leia(x)
            fimse
            i <- 1
          fimse
        
          se (cal = "raiz") ou (cal = "raiz quadrada") entao
            escreval("qual o radicando?")
            leia(n1)
          
            raiz <- raizq(n1)
            escreval("A raiz quadrada desse número é: ", raiz)
            i <- 1
          fimse
        
          se (cal = "porcentagem") entao
            escreval("Qual será o valor usado?")
            leia(n1)
            escreval()
            escreval("Qual a porcentagem?(não use simbolos apenas numeros")
            leia(n2)

            porc <- (n2 /100) * n1
            escreval("A porcentagem desse valor é: ", porc)
          
            i <- 1
          fimse
        
        escreval("Deseja fazer uma nova conta? caso sim digite (s) caso não digite (n)")
        leia(pause)
        
        se pause = "n" entao
          escreval("Muito obrigado até a próxima ", nome)
          i <- 1
        fimse

        se (pause <> "s") e (pause <> "n") entao
          escreval("você deseja parar? digite sim ou não, caso digite algo diferente irá finalizar!")
          leia(pause)
        fimse
        
        se (pause <> "sim") e (pause <> "s") entao
          escreval("Muito obrigado até a próxima ", nome)
        fimse
      fimenquanto
fimalgoritmo
