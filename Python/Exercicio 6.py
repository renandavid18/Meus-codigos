print("Ola me informe 3 numeros qualquer")
n1 = int(input("Me informa o primeiro numero: "))
n2 = int(input("Me informa o segundo numero: "))
n3 = int(input("Me informa o terceiro numero: "))

if(n1 < n2+n3 and n3 < n1+n2 and n2 < n1+n3):
    print("Esses numeros podem ser os lados de um triangulo")
else:
    print("Esses numeros nao podem ser os lados de um triangulo")